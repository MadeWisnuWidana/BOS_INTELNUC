#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import threading
import sys

class CLICommandNode(Node):
    def __init__(self):
        super().__init__('cli_command_node')
        self.cmd_pub = self.create_publisher(String, '/brone/command', 10)
        self.get_logger().info('CLI Command Node aktif. Siap mengirim perintah ke State Machine.')
        self.print_menu()

    def print_menu(self):
        print("\n" + "="*50)
        print("  BRONE CLI COMMAND TERMINAL")
        print("="*50)
        print("Ketik salah satu perintah di bawah ini dan tekan Enter:")
        print("  - 'init'   : Ganti ke mode action_module & panggil Page Init")
        print("  - 'start'  : Panggil Page Melambai/Start")
        print("  - 'vision' : Ganti ke head_control_module (Vision Mode)")
        print("  - 'follow' : Aktifkan mode tracking (Follow Mode)")
        print("  - 'stop'   : Hentikan gerakan saat ini")
        print("  - 'quit'   : Keluar dari terminal CLI ini")
        print("="*50)

    def send_command(self, cmd_str):
        msg = String()
        msg.data = cmd_str
        self.cmd_pub.publish(msg)
        self.get_logger().info(f'Mengirim perintah: "{cmd_str}"')

def user_input_thread(node):
    while rclpy.ok():
        try:
            user_input = input("\nMasukkan perintah> ").strip().lower()
            if not user_input:
                continue
            
            if user_input in ['quit', 'exit']:
                print("Keluar dari CLI Terminal...")
                rclpy.shutdown()
                break
                
            node.send_command(user_input)
            
        except (KeyboardInterrupt, EOFError):
            print("\nKeluar dari CLI Terminal...")
            rclpy.shutdown()
            break

def main(args=None):
    rclpy.init(args=args)
    node = CLICommandNode()
    
    # Jalankan thread terpisah untuk menerima input keyboard agar tidak memblokir ROS
    input_thread = threading.Thread(target=user_input_thread, args=(node,))
    input_thread.daemon = True
    input_thread.start()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
