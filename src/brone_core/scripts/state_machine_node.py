#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Int32
from geometry_msgs.msg import Point, Twist

class BroneStateMachine(Node):
    def __init__(self):
        super().__init__('brone_state_machine')
        
        self.current_state = 'IDLE'
        
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
        
        self.get_logger().info('BRONE State Machine AKTIF. Menunggu perintah...')

    def set_module(self, module_name):
        msg = String()
        msg.data = module_name
        self.module_pub.publish(msg)
        self.get_logger().info(f'Mengaktifkan Modul: {module_name}')

    def play_action(self, page_num):
        msg = Int32()
        msg.data = page_num
        self.action_pub.publish(msg)
        self.get_logger().info(f'Menjalankan Action Page: {page_num}')

    def command_callback(self, msg):
        command = msg.data.lower()
        
        if command == 'init':
            self.current_state = 'INIT'
            # 1. Masuk ke mode aksi
            self.set_module('action_module')
            # 2. Panggil halaman 1 (biasanya Init Pose di OP3)
            self.play_action(1)
            
        elif command == 'start':
            self.current_state = 'START'
            self.set_module('action_module')
            # 3. Panggil halaman melambai (sesuaikan ID, misal: 15)
            self.play_action(15)
            # TODO: Tambahkan trigger layar wajah di sini
            
        elif command == 'vision':
            self.current_state = 'VISION_MODE'
            # Pindah ke head_control_module agar leher bisa bebas bergerak via Point
            self.set_module('head_control_module')
            
        elif command == 'follow':
            self.current_state = 'FOLLOW_MODE'
            # Tetap menatap, tapi aktifkan juga pergerakan kaki
            self.set_module('head_control_module')
            
    def vision_callback(self, msg):
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
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()