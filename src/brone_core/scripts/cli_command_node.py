#!/usr/bin/env python3

"""
=============================================================================
  BRONE CLI Command Node (Optimized Version)
=============================================================================
  Antarmuka terminal interaktif untuk mengirim perintah ke State Machine BRONE.
  Menggunakan thread terpisah untuk mencegah blocking pada rclpy.spin.
=============================================================================
"""

import rclpy
import threading
import sys
import os
from rclpy.node import Node
from std_msgs.msg import String

# Menghapus CYCLONEDDS_URI otomatis dari proses ini
os.environ.pop('CYCLONEDDS_URI', None)

class CLICommandNode(Node):
    # Daftar perintah valid untuk mencegah pengiriman pesan sampah ke sistem
    VALID_COMMANDS = ['init', 'wave', 'vision', 'follow', 'stop']

    def __init__(self):
        super().__init__('brone_cli_terminal')
        self.cmd_pub = self.create_publisher(String, '/brone/command', 10)
        
        # Mulai thread input segera setelah inisialisasi node selesai
        self.input_thread = threading.Thread(target=self._user_input_loop, daemon=True)
        self.input_thread.start()

    def _print_menu(self) -> None:
        """Menampilkan menu antarmuka di terminal."""
        menu = f"""
{'='*55}
             BRONE CLI COMMAND TERMINAL
{'='*55}
  Ketik salah satu perintah di bawah ini dan tekan Enter:
    - 'init'   : Eksekusi pose inisialisasi awal
    - 'wave'   : Eksekusi pose awal (Melambai)
    - 'vision' : Aktifkan pelacakan wajah (Leher saja)
    - 'follow' : Aktifkan mode tracking (Leher + Roda)
    - 'stop'   : Hentikan pergerakan darurat
    - 'clear'  : Bersihkan layar terminal
    - 'quit'   : Keluar dari terminal
{'='*55}"""
        print(menu)

    def send_command(self, cmd_str: str) -> None:
        """Mempublikasikan perintah ke topik ROS 2."""
        msg = String()
        msg.data = cmd_str
        self.cmd_pub.publish(msg)
        # Gunakan print biasa alih-alih logger agar tidak merusak tampilan prompt input()
        print(f"[SUCCESS] Perintah '{cmd_str}' terkirim ke State Machine.")

    def _user_input_loop(self) -> None:
        """Loop berjalan di thread terpisah untuk menangani input keyboard."""
        self._print_menu()
        
        while rclpy.ok():
            try:
                # Prompt menunggu input pengguna
                user_input = input("\n[BRONE] Masukkan perintah > ").strip().lower()
                
                if not user_input:
                    continue
                
                # Penanganan perintah internal CLI
                if user_input in ['quit', 'exit']:
                    print("\n[SYS] Mematikan CLI Terminal...")
                    # Matikan rclpy dari dalam thread agar spin() berhenti
                    if rclpy.ok():
                        rclpy.shutdown()
                    break
                elif user_input == 'clear':
                    # Membersihkan layar terminal (Linux/Mac)
                    print("\033[H\033[J", end="")
                    self._print_menu()
                    continue

                # Validasi dan pengiriman perintah ke robot
                if user_input in self.VALID_COMMANDS:
                    self.send_command(user_input)
                else:
                    print(f"[ERROR] '{user_input}' bukan perintah yang valid. Ketik 'clear' untuk melihat menu.")
                    
            except (KeyboardInterrupt, EOFError):
                print("\n[SYS] Terminasi paksa (Ctrl+C). Keluar...")
                if rclpy.ok():
                    rclpy.shutdown()
                break
            except Exception as e:
                print(f"\n[SYS] Terjadi kesalahan pada input thread: {e}")
                break

def main(args=None):
    # Inisialisasi ROS
    rclpy.init(args=args)
    
    # Buat instance Node (thread input akan otomatis berjalan di __init__)
    node = CLICommandNode()
    
    try:
        # Spin menunggu event atau callback (walaupun CLI ini hanya mempublikasi, 
        # spin menjaga proses ROS tetap hidup dengan benar)
        rclpy.spin(node)
    except KeyboardInterrupt:
        # Penanganan jika user menekan Ctrl+C sebelum input prompt muncul
        pass
    finally:
        # Pembersihan (Cleanup) yang aman
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()

if __name__ == '__main__':
    # Eksekusi utama
    main()