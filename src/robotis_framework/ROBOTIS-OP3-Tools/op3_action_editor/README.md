# Panduan Lengkap ROBOTIS OP3 Action Editor

Repositori ini berisi tool **Action Editor** untuk robot ROBOTIS OP3. Action Editor adalah antarmuka berbasis terminal (CLI/ncurses) yang digunakan untuk membuat, mengedit, dan menyimpan pose atau gerakan (motion) ke dalam file `.bin` yang nantinya bisa dimainkan oleh robot.

---

## 1. Cara Menjalankan (How to Run)

Pastikan workspace ROS 2 Anda telah di-*source* terlebih dahulu sebelum menjalankan *executable*.

```bash
source /opt/ros/jazzy/setup.bash
source ~/brone_main_ws/install/setup.bash
unset CYCLONEDDS_URI

ros2 run op3_action_editor action_editor
```

> **Catatan Penting:** 
> - Anda membutuhkan terminal berukuran minimal **80 (kolom) x 24 (baris)**. Jika layar terminal terlalu kecil, beberapa baris menu tidak akan muncul dan kursor akan merusak tampilan UI.
> - Pastikan konfigurasi pada `OP3.robot` di bagian `op3_manager` tidak memiliki baris motor yang dikomentari (tanda `#`) agar semua 20 DOF (Derajat Kebebasan) terbaca sempurna.

---

## 2. Navigasi Keyboard Dasar (Tanpa Command)

Gunakan tombol-tombol berikut langsung pada keyboard saat berada di menu utama:

- `Panah Atas` / `Bawah` / `Kiri` / `Kanan` : Pindah kursor antar baris/kolom.
- `[` atau `]` : Mengurangi atau menambah nilai saat ini sebesar **1**.
- `{` atau `}` : Mengurangi atau menambah nilai saat ini sebesar **10**.
- `Spasi (Spacebar)` : **Menyalakan / Mematikan (Toggle) Torsi** pada motor yang sedang ditunjuk oleh kursor. (Mode lemas / mode kaku).
- `,` (Koma) : *Copy* (Menyimpan nilai ke memori cache sementara).
- `.` (Titik) : *Paste* (Menerapkan nilai dari cache).
- `/` (Garis miring) : Membersihkan cache.

---

## 3. Daftar Perintah Lengkap (Command Mode)

Untuk menggunakan perintah di bawah, tekan huruf apa saja di keyboard, dan otomatis kursor akan pindah ke bagian baris bawah `]`. Ketikkan perintah, lalu tekan **Enter**.

### Dasar & File
* `help` : Menampilkan daftar bantuan dan panduan perintah.
* `exit` : Keluar aplikasi (sistem akan bertanya apakah Anda mau save sebelum keluar).
* `re` : Menggambar ulang / me-refresh layar UI terminal.
* `list` : Melihat daftar halaman (page) yang telah dibuat.
* `new` : Membuat halaman (page) / sequence gerakan yang baru.
* `name` : Memberikan nama pada halaman saat ini.
* `save` : **Menyimpan** seluruh perubahan (wajib dilakukan jika ingin permanen).

### Mengatur Halaman & Memainkan Gerakan
* `n` / `b` : Pindah ke halaman *Next* (Selanjutnya) atau *Back* (Sebelumnya).
* `page <nomor_page>` : Lompat langsung ke halaman nomor tertentu.
* `play` : Memainkan gerakan secara berurutan pada halaman saat ini.
* `playboth <nomor_page>` : Memainkan gerakan pada halaman yang dipilih.

### Mengedit Gerakan & Waktu (Step)
* `set <nilai>` : Mengeset posisi secara manual pada kursor aktif.
* `w <nomor_step>` : **Write** / menyimpan status pose robot di `STP7` (Real-time) menuju kolom step (misal `w 0` untuk simpan ke Step 0).
* `d <nomor_step>` : Menghapus satu kolom step.
* `i <nomor_step>` : Menyisipkan/memasukkan step baru di antara step yang ada.
* `m <asal> <tujuan>` : Memindahkan step dari index `asal` ke index `tujuan`.
* `copy <nomor_page>` : Menyalin satu *page*/halaman secara utuh.
* `time` / `speed` : Mode masuk untuk mengedit settingan waktu jeda (pause) dan durasi kecepatan (time).

### Pengaturan Torsi
* `on <ID_motor>` : Mengunci/mengeraskan motor (Contoh: `on 1 2` atau cukup `on` untuk seluruh tubuh).
* `off <ID_motor>` : Melemaskan motor (Sangat penting saat ingin menggunakan fitur *Kinesthetic Teaching* dengan tangan).

### Mirroring (Pencerminan Otomatis)
Jika membuat satu pose pada tubuh bagian kiri/kanan dan ingin menyeimbangkannya:
* `mrl <nomor_step>` / `mlr <nomor_step>` : Cermin dari Kanan->Kiri atau Kiri->Kanan (Seluruh Tubuh).
* `murl <nomor_step>` / `mulr <nomor_step>` : Cermin Kanan->Kiri atau Kiri->Kanan (Hanya Tubuh Atas).
* `mlrl <nomor_step>` / `mllr <nomor_step>` : Cermin Kanan->Kiri atau Kiri->Kanan (Hanya Kaki/Tubuh Bawah).
* `ms <nomor_step>` : Tukar menyilang letak lengan dan kaki dari kiri ke kanan dan sebaliknya.

---

## 4. Panduan Membuat Gerakan Secara Fisik (Kinesthetic Teaching)

Membuat gerakan tanpa mengetik derajat/nilai angka sama sekali dapat dilakukan secara kinestetik dengan cara berikut:

1. **Buat Halaman Baru**
   Ketik `new` (Enter), lalu beri nama dengan mengetik `name` (Enter) -> Tulis nama (misal `gerak_tangan`).
2. **Matikan Torsi Motor**
   Ketik `off` lalu Enter (atau posisikan kursor pada motor tertentu dan tekan `Spasi`). Robot sekarang akan dalam kondisi lemas.
3. **Gerakkan Secara Manual**
   Posisikan kaki/lengan robot ke pose 1 (Awal) dengan tangan Anda. Tahan tubuh robot.
4. **Kunci Torsi & Ambil Nilai (STP7)**
   Ketik `on` lalu Enter (atau `Spasi`). Motor akan mengunci posenya. Perhatikan kolom `STP7` di UI; nilai angka posisi motor saat ini akan muncul.
5. **Simpan ke Step**
   Ketik `w 0` (Write 0) lalu Enter. Nilai `STP7` akan disalin secara otomatis ke kolom `STP0`. Pose 1 selesai.
6. **Ulangi untuk Pose Berikutnya**
   Ketik `off` lagi, ubah pose menjadi gerakan ke-2. Ketik `on`, lalu ketik `w 1`. Ulangi terus untuk step ke-2, ke-3, dst.
7. **Haluskan Waktu Transisi**
   Panah bawah ke baris `Time` dan `PauseTime`. Beri nilai tambahan pada `Time` dengan menekan tombol `]` beberapa kali di setiap kolom Step agar robot berpindah posisi secara perlahan dan halus (tidak tersentak instan).
8. **Test & Save**
   Ketik `play` untuk menguji cobanya. Jika dirasa sempurna, pastikan untuk mengetik `save` (Enter) agar gerakan Anda terdaftar di file konfigurasi.
