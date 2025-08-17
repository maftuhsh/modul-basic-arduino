
# Cara Mengunduh & Memasang Arduino IDE

Panduan ini menjelaskan langkah demi langkah cara mengunduh dan memasang Arduino IDE resmi, baik di Windows, macOS, maupun Linux.

## 1. Unduh Arduino IDE dari Situs Resmi
- Kunjungi situs resmi Arduino → navigasikan ke bagian **Software / Downloads**.  
- Cari versi terbaru Arduino IDE (versi 2.x saat ini, atau versi klasik 1.x jika kamu perlu).  
- Pilih installer sesuai sistem operasi kamu:  
  - Windows (Installer `.exe`)  
  - macOS (Disk Image `.dmg`)  
  - Linux (AppImage)  
Ø **Download akan dimulai otomatis setelah kamu klik link download.**

Link resmi: [arduino.cc/software](https://www.arduino.cc/en/software)

---

## 2. Cara Instalasi Setiap Sistem Operasi

### **Windows**
1. Jalankan file `.exe` hasil download.  
2. Ikuti petunjuk di layar: klik **I Agree**, pilih komponen, dan tentukan lokasi instalasi (tinggalkan default saja kalau bingung).  
3. Centang opsi **Run Arduino IDE** agar auto buka setelah instal selesai (opsional).  

### **macOS**
1. Buka file `.dmg` yang diunduh.  
2. Drag & drop ikon **Arduino IDE** ke folder **Applications**.  
3. Buka aplikasi dari Launchpad atau Spotlight seperti biasa.  

### **Linux**
1. Temukan file **AppImage** hasil download.  
2. Klik kanan, buka **Properties → Permission**, lalu centang **“Allow executing file as a program”**.  
3. Klik dua kali file AppImage untuk menjalankan Arduino IDE.  
   - Jika muncul error `dlopen(): error loading libfuse.so.2`, artinya ada dependensi yang hilang.  
     - Buka terminal dan jalankan:
       ```bash
       sudo apt-get -y install libfuse2
       ```
     - Setelah selesai, coba jalankan ulang AppImage Arduino IDE.  

---

## 3. Tips Tambahan
- Kamu juga bisa menggunakan versi **portable**:
  - Download versi **ZIP** (Windows) atau **ZIP 64-bit** (Linux), lalu ekstrak dan jalankan tanpa perlu instalasi.  
- Ada juga versi **legacy (1.8.x)** jika kamu butuh kompatibilitas lebih luas.  
- Jika kamu ingin versi yang paling terbaru dan ingin mencoba fitur baru, bisa pakai **Nightly Builds**.  

---

## 4. Selanjutnya: Siapkan Arduino IDE untuk Board ESP32 (Opsional)
Jika kamu berencana menggunakan papan seperti **ESP32**, kamu bisa siapkan tambahan:

1. Buka Arduino IDE → **File → Preferences**
2. Tambahkan URL berikut ke kolom **Additional Board Manager URLs**:
   ```
   https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
   ```
3. Buka **Tools → Board → Boards Manager**, cari **ESP32**, lalu klik **Install** dan pilih tipe board kamu.  

---

## Ikhtisar Tabel

| Sistem Operasi | Langkah Inti                        |
|----------------|-------------------------------------|
| Windows        | Unduh `.exe` → Jalankan → Instalasi |
| macOS          | Unduh `.dmg` → Drag ke Applications  |
| Linux          | Unduh AppImage → Izinkan → Jalankan |
| (Opsional)     | ZIP portable atau setup ESP32 setup  |

---

Setelah IDE terpasang, kamu siap lanjut ke tutorial berikutnya seperti menghubungkan Arduino ke komputer, memilih board & port, dan mencoba program pertama seperti `Blink`.
