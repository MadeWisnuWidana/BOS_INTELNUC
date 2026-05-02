#!/usr/bin/env python3

"""
=============================================================================
  BRONE State Machine Node
=============================================================================
  Node ini akan otomatis menginisialisasi robot OP3 saat dijalankan:
    1. Menunggu op3_manager siap (cek topic)
    2. Mengaktifkan action_module
    3. Menjalankan gerakan Init (Page 001)

  Cara menjalankan:
    ros2 run brone_core state_machine_node.py

  Prasyarat:
    - op3_manager harus sudah berjalan terlebih dahulu
    - Pastikan OP3.robot tidak ada joint yang dikomentari (#)

=============================================================================
  TROUBLESHOOTING
=============================================================================
  Error: "Timeout! op3_manager belum terdeteksi"
    -> op3_manager belum di-launch. Jalankan dulu:
       ros2 launch op3_manager op3_manager.launch.py
       atau pastikan executable op3_manager sudah berjalan.

  Error: "Action gagal / robot tidak bergerak setelah play_action"
    -> Pastikan torsi motor sudah ON.
    -> Pastikan Page 001 di motion_4095.bin sudah terisi
       (buka action_editor, ketik 'page 1', cek STP0 ada isinya).
    -> Cek kabel USB ke OpenCR tersambung di /dev/ttyUSB0.

  Error: "Module 'action_module' tidak aktif"
    -> Pastikan op3_manager sudah selesai loading semua dynamixel.
       Tunggu log "[op3_manager] Succeeded to init" muncul dulu.
    -> Cek apakah topic /robotis/enable_ctrl_module ada:
       ros2 topic list | grep enable_ctrl_module

  Error: "Robot bergerak aneh / tersentak keras"
    -> Periksa offset.yaml, pastikan semua offset = 0.0 atau sesuai kalibrasi.
    -> Periksa apakah page yang dipanggil benar (Page 1), bukan page kosong.

  Error: "Node berhenti / crash"
    -> Cek log ROS 2: ros2 topic echo /rosout
    -> Pastikan workspace sudah di-source:
       source ~/brone_main_ws/install/setup.bash

  Tips Umum:
    -> Cek semua topic aktif  : ros2 topic list
    -> Cek status action      : ros2 service call /robotis/action/is_running
                                op3_action_module_msgs/srv/IsRunning
    -> Monitor perintah       : ros2 topic echo /brone/command
    -> Kirim perintah manual  : ros2 topic pub --once /brone/command
                                std_msgs/msg/String "data: 'init'"
=============================================================================
"""

import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import String, Int32
from geometry_msgs.msg import Point, Twist


class BroneStateMachine(Node):
    def __init__(self):
        super().__init__('brone_state_machine')

        self.current_state = 'BOOT'
        self.init_done = False

        # --- PUBLISHERS KE ROBOTIS FRAMEWORK ---
        # Untuk mengganti modul (action_module, head_control_module, dll)
        self.module_pub = self.create_publisher(String, '/robotis/enable_ctrl_module', 10)
        # Untuk memanggil nomor halaman aksi (misal: 1 untuk Init, 15 untuk Melambai)
        self.action_pub = self.create_publisher(Int32, '/robotis/action/page_num', 10)

        # --- PUBLISHERS KE LOWER BODY (OrangePi) ---
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # --- SUBSCRIBERS ---
        self.command_sub = self.create_subscription(String, '/brone/command', self.command_callback, 10)
        self.vision_sub = self.create_subscription(Point, '/brone/perception/target', self.vision_callback, 10)

        # --- SUBSCRIBER UNTUK CEK STATUS ACTION ---
        self.status_sub = self.create_subscription(String, '/robotis/movement_done', self.movement_done_callback, 10)

        self.get_logger().info('='*60)
        self.get_logger().info('  BRONE State Machine Node AKTIF')
        self.get_logger().info('  Memulai Auto-Init Sequence...')
        self.get_logger().info('='*60)

        # --- AUTO-INIT: Tunggu 3 detik agar op3_manager siap ---
        self.init_timer = self.create_timer(3.0, self.auto_init_callback)

    # ================================================================
    #  AUTO-INIT SEQUENCE
    # ================================================================
    def auto_init_callback(self):
        """Dipanggil otomatis 3 detik setelah node start."""
        # Timer hanya perlu jalan sekali
        self.init_timer.cancel()

        self.get_logger().info('-'*60)
        self.get_logger().info('[BOOT] Mengecek apakah op3_manager sudah siap...')

        # Cek apakah topic /robotis/enable_ctrl_module sudah ada subscriber-nya
        topic_list = self.get_topic_names_and_types()
        manager_ready = any('/robotis/enable_ctrl_module' in t[0] for t in topic_list)

        if not manager_ready:
            self.get_logger().warn('='*60)
            self.get_logger().warn('[BOOT] TIMEOUT! op3_manager belum terdeteksi.')
            self.get_logger().warn('  Pastikan op3_manager sudah di-launch terlebih dahulu!')
            self.get_logger().warn('  Mencoba ulang dalam 5 detik...')
            self.get_logger().warn('='*60)
            # Coba lagi dalam 5 detik
            self.init_timer = self.create_timer(5.0, self.auto_init_callback)
            return

        self.get_logger().info('[BOOT] op3_manager terdeteksi! Melanjutkan init...')

        # --- STEP 1: Aktifkan action_module ---
        self.get_logger().info('[INIT] Step 1/2 - Mengaktifkan action_module...')
        self.set_module('action_module')

        # Beri jeda 1.5 detik agar module selesai loading
        self.module_wait_timer = self.create_timer(1.5, self.play_init_page)

    def play_init_page(self):
        """Dipanggil setelah action_module aktif, menjalankan Page 001."""
        self.module_wait_timer.cancel()

        # --- STEP 2: Jalankan gerakan Init (Page 005) ---
        self.get_logger().info('[INIT] Step 2/2 - Menjalankan Init Pose (Page 005)...')
        self.play_action(5)

        self.current_state = 'INIT'
        self.init_done = True

        self.get_logger().info('-'*60)
        self.get_logger().info('[INIT] Init sequence SELESAI!')
        self.get_logger().info('[INIT] Robot seharusnya sedang bergerak ke Init Pose.')
        self.get_logger().info('[INIT] State sekarang: INIT')
        self.get_logger().info('[INIT] Menunggu perintah dari /brone/command ...')
        self.get_logger().info('-'*60)

    # ================================================================
    #  HELPER FUNCTIONS
    # ================================================================
    def set_module(self, module_name):
        """Mengirim perintah untuk mengganti modul kontrol yang aktif."""
        msg = String()
        msg.data = module_name
        self.module_pub.publish(msg)
        self.get_logger().info(f'  -> Modul diaktifkan: {module_name}')

    def play_action(self, page_num):
        """Mengirim perintah untuk menjalankan action page tertentu."""
        msg = Int32()
        msg.data = page_num
        self.action_pub.publish(msg)
        self.get_logger().info(f'  -> Menjalankan Action Page: {page_num}')

    # ================================================================
    #  CALLBACKS
    # ================================================================
    def movement_done_callback(self, msg):
        """Callback ketika gerakan selesai dijalankan."""
        self.get_logger().info(f'[STATUS] Gerakan selesai: {msg.data}')

    def command_callback(self, msg):
        """Callback untuk menerima perintah dari topic /brone/command."""
        command = msg.data.lower().strip()
        self.get_logger().info(f'[CMD] Perintah diterima: "{command}" | State saat ini: {self.current_state}')

        if command == 'init':
            self.current_state = 'INIT'
            self.get_logger().info('[CMD] Menjalankan ulang Init Pose...')
            # 1. Masuk ke mode aksi
            self.set_module('action_module')
            # 2. Panggil halaman 5 (Init Pose)
            self.play_action(5)

        elif command == 'start':
            self.current_state = 'START'
            self.set_module('action_module')
            # Panggil halaman melambai (sesuaikan ID, misal: 15)
            self.play_action(15)
            # TODO: Tambahkan trigger layar wajah di sini

        elif command == 'vision':
            self.current_state = 'VISION_MODE'
            # Pindah ke head_control_module agar leher bisa bebas bergerak via Point
            self.set_module('head_control_module')
            self.get_logger().info('[CMD] Mode Vision aktif. Leher bisa dikontrol.')

        elif command == 'follow':
            self.current_state = 'FOLLOW_MODE'
            # Tetap menatap, tapi aktifkan juga pergerakan kaki
            self.set_module('head_control_module')
            self.get_logger().info('[CMD] Mode Follow aktif.')

        elif command == 'stop':
            self.current_state = 'IDLE'
            # Mengirim -1 untuk menghentikan gerakan action yang sedang berjalan
            self.play_action(-1)
            self.get_logger().info('[CMD] Gerakan DIHENTIKAN. State: IDLE')

        else:
            self.get_logger().warn(f'[CMD] Perintah tidak dikenal: "{command}"')
            self.get_logger().warn('  Perintah yang tersedia: init, start, vision, follow, stop')

    def vision_callback(self, msg):
        """Callback untuk data visual/persepsi dari kamera."""
        if self.current_state == 'VISION_MODE':
            # Di sini NUC menghitung IK leher dan mengirim ke /robotis/head_control/set_joint_states
            pass

        elif self.current_state == 'FOLLOW_MODE':
            # Kirim kecepatan ke OrangePi
            cmd = Twist()
            cmd.linear.x = 0.2
            self.cmd_vel_pub.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = BroneStateMachine()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Node dihentikan oleh user (Ctrl+C).')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()