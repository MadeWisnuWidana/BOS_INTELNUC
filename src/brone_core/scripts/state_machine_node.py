#!/usr/bin/env python3

"""
=============================================================================
  BRONE State Machine Node (Optimized Version)
=============================================================================
  Node pusat pengatur status (Cerebrum) pada arsitektur BOS.
  Mengorkestrasikan Robotis OP3 Framework, Vision (Jetson), dan Locomotion (OrangePi).
=============================================================================
"""

import os

# Menghapus CYCLONEDDS_URI otomatis dari proses ini
os.environ.pop('CYCLONEDDS_URI', None)

import rclpy
from rclpy.node import Node
from rclpy.timer import Timer
from enum import Enum, auto
from std_msgs.msg import String, Int32
from geometry_msgs.msg import Point, Twist

class State(Enum):
    """Enumerasi untuk status mesin, mencegah typo pada penamaan state."""
    BOOT = auto()
    INIT = auto()
    WAVE = auto()
    VISION_MODE = auto()
    FOLLOW_MODE = auto()
    IDLE = auto()

class BroneStateMachine(Node):
    # --- KONSTANTA HALAMAN AKSI (ACTION PAGES) ---
    PAGE_STOP = -1
    PAGE_INIT = 5
    PAGE_WAVE = 6

    def __init__(self):
        super().__init__('brone_state_machine')

        self.current_state: State = State.BOOT
        self.init_done: bool = False

        # --- PUBLISHERS (Robotis Framework - NUC) ---
        self.module_pub = self.create_publisher(String, '/robotis/enable_ctrl_module', 10)
        self.action_pub = self.create_publisher(Int32, '/robotis/action/page_num', 10)

        # --- PUBLISHERS (Locomotion - OrangePi) ---
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # --- SUBSCRIBERS ---
        self.command_sub = self.create_subscription(String, '/brone/command', self.command_callback, 10)
        self.vision_sub = self.create_subscription(Point, '/brone/perception/target', self.vision_callback, 10)
        self.status_sub = self.create_subscription(String, '/robotis/movement_done', self.movement_done_callback, 10)

        self.get_logger().info('='*60)
        self.get_logger().info('  BOS: BRONE State Machine Node AKTIF')
        self.get_logger().info('  Memulai Auto-Init Sequence...')
        self.get_logger().info('='*60)

        # Menggunakan satu timer untuk setup awal agar lebih bersih
        self.setup_timer: Timer = self.create_timer(3.0, self.auto_init_callback)

    # ================================================================
    #  AUTO-INIT SEQUENCE
    # ================================================================
    def auto_init_callback(self) -> None:
        """Mengecek kesiapan op3_manager sebelum mengambil alih kontrol."""
        topic_list = self.get_topic_names_and_types()
        manager_ready = any('/robotis/enable_ctrl_module' in t[0] for t in topic_list)

        if not manager_ready:
            self.get_logger().warn('[BOOT] TIMEOUT! op3_manager belum terdeteksi. Mencoba lagi dalam 5 detik...')
            self.setup_timer.timer_period_ns = 5000000000  # Ubah interval ke 5 detik tanpa membuat objek baru
            return

        # Manager siap, matikan timer pencarian
        self.setup_timer.cancel()
        self.get_logger().info('[BOOT] op3_manager terdeteksi! Melanjutkan init...')

        # Step 1: Aktifkan Action Module
        self.set_module('action_module')
        
        # Buat timer sementara untuk jeda eksekusi gerakan
        self.action_delay_timer = self.create_timer(1.5, self._execute_initial_pose)

    def _execute_initial_pose(self) -> None:
        """Menjalankan pose inisialisasi awal robot."""
        self.action_delay_timer.cancel()
        self.get_logger().info('[INIT] Menjalankan Init Pose...')
        
        self.play_action(self.PAGE_INIT)
        
        self.current_state = State.INIT
        self.init_done = True
        self.get_logger().info('[INIT] Sistem Berhasil Diinisialisasi. Menunggu perintah...')

    # ================================================================
    #  HELPER FUNCTIONS
    # ================================================================
    def set_module(self, module_name: str) -> None:
        """Switch Robotis control module."""
        msg = String()
        msg.data = module_name
        self.module_pub.publish(msg)
        self.get_logger().info(f'[SYS] Modul diaktifkan: {module_name}')

    def play_action(self, page_num: int) -> None:
        """Trigger eksekusi halaman aksi pada Action Editor."""
        msg = Int32()
        msg.data = page_num
        self.action_pub.publish(msg)
        self.get_logger().info(f'[SYS] Menjalankan Action Page: {page_num}')

    # ================================================================
    #  CALLBACKS
    # ================================================================
    def movement_done_callback(self, msg: String) -> None:
        """Menerima notifikasi saat gerakan fisik selesai."""
        self.get_logger().info(f'[STATUS] Gerakan fisik selesai: {msg.data}')

    def command_callback(self, msg: String) -> None:
        """State machine logic berdasarkan input perintah eksternal."""
        command = msg.data.lower().strip()
        self.get_logger().info(f'[CMD] Input: "{command}" | State: {self.current_state.name}')

        if command == 'init':
            self.current_state = State.INIT
            self.set_module('action_module')
            self.play_action(self.PAGE_INIT)

        elif command == 'wave':
            self.current_state = State.WAVE
            self.set_module('action_module')
            self.play_action(self.PAGE_WAVE)

        elif command == 'vision':
            self.current_state = State.VISION_MODE
            self.set_module('head_control_module')
            self.get_logger().info('[CMD] Vision Mode: Leher siap melacak (Gaze Control).')

        elif command == 'follow':
            self.current_state = State.FOLLOW_MODE
            self.set_module('head_control_module')
            self.get_logger().info('[CMD] Follow Mode: Pelacakan aktif, roda omniwheel bersiap.')

        elif command == 'stop':
            self.current_state = State.IDLE
            self.play_action(self.PAGE_STOP)
            
            # Hentikan juga pergerakan kaki (Kirim Twist 0.0)
            stop_cmd = Twist()
            self.cmd_vel_pub.publish(stop_cmd)
            self.get_logger().info('[CMD] Semua pergerakan dihentikan secara darurat.')

        else:
            self.get_logger().warn(f'[CMD] Abaikan: Perintah "{command}" tidak valid.')

    def vision_callback(self, msg: Point) -> None:
        """Memproses data target dari Jetson (Visual Cortex)."""
        if self.current_state == State.VISION_MODE:
            # TODO: Inverse Kinematics untuk head_pan & head_tilt
            pass

        elif self.current_state == State.FOLLOW_MODE:
            # TODO: IK Leher berjalan + mengirim Twist target ke OrangePi
            cmd = Twist()
            cmd.linear.x = 0.2
            self.cmd_vel_pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = BroneStateMachine()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Sistem BOS dihentikan oleh user (Ctrl+C).')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()