# 📘 Modul Belajar Arduino & IoT (Fundamental Pemrograman dari Nol)
- tujuanku membuat ini adalah memperkenalkan Arduino dari nol: apa itu Arduino, komponen utamanya, dan bagaimana memulai penggunaannya. Ini merupakan titik awal yang sempurna untuk pemula yang belum pernah bersentuhan dengan elektronika atau pemrograman.

- Arduino sendiri adalah platform mikrokontroler open-source yang bisa diprogram pakai bahasa C/C++ sederhana. Papan paling umum, Arduino Uno, dilengkapi berbagai pin input/output (digital & analog), dan mudah dihubungkan ke komputer lewat USB untuk pengunggahan kode dan debugging.

## 🤔 Apa itu Arduino?

Arduino adalah sebuah papan elektronik kecil (microcontroller) yang bisa diprogram untuk membaca input (misalnya sensor, tombol, suara, cahaya) dan mengendalikan output (misalnya lampu LED, motor, layar).

Contoh sederhananya:

🔹Arduino membaca sensor suhu → kalau panas di atas 30°C → Arduino menyalakan kipas otomatis.

🔹Arduino membaca tombol ditekan → Arduino menyalakan lampu.

👉 Jadi, Arduino itu ibarat otaknya benda elektronik, seperti otak manusia yang menerima informasi dari panca indera lalu memberi perintah ke tubuh.anjut ke latihan hardware & IoT.


---
## ⚡ Kenapa Harus Arduino?

Kenapa banyak orang (terutama pemula) belajar pakai Arduino dulu?

🔹Mudah Dipahami → Arduino pakai bahasa pemrograman yang sederhana (turunan C++).

🔹Murah & Banyak di Pasaran → Harga board Arduino (atau klonnya) relatif murah, bahkan di bawah Rp 100 ribu.

🔹Banyak Tutorial → Karena populer, banyak banget panduan, proyek, dan komunitasnya.

🔹Kompatibel dengan Banyak Sensor → Bisa langsung dipasang dengan sensor suhu, cahaya, kelembapan, WiFi, Bluetooth, dsb.

🔹Langkah Awal ke IoT → Setelah bisa Arduino, gampang lanjut ke ESP32/ESP8266 untuk bikin proyek Internet of Things (IoT).

👉 Arduino cocok banget buat pemula yang mau belajar dunia elektronik, robotik, dan IoT.

---

🛠️ Bagaimana Cara Menggunakan Arduino?

Langkah umumnya seperti ini:

1. Siapkan Alat

- Papan Arduino (misalnya Arduino Uno).

- Kabel USB untuk menghubungkan ke laptop/PC.

- (Opsional) sensor atau komponen elektronik (LED, resistor, motor, dll).

2. Install Software Arduino IDE

- Unduh di https://www.arduino.cc/en/software.

- Software ini digunakan untuk menulis kode dan mengirimkannya ke Arduino.

3. Tulis Program

Semua program Arduino terdiri dari:
```
void setup() {
  // Bagian ini jalan sekali saat Arduino mulai
}

void loop() {
  // Bagian ini jalan terus berulang-ulang
}

```

4. Upload Program ke Arduino

- Sambungkan Arduino ke laptop pakai kabel USB.

- Pilih board Arduino dan port di Arduino IDE.

- Klik tombol Upload (ikon panah ke kanan).

- Arduino akan langsung menjalankan programnya.


## Penjelasan Tambahan Berdasarkan Sumber Lain

# Menurut artikel dan dokumentasi resmi:

- Arduino adalah platform open-source hardware & software berupa papan mikrokontroler yang bisa diprogram dengan bahasa C/C++ sederhana.

- Arduino dirancang sejak 2005 untuk memudahkan pembuatan proyek-proyek digital secara murah dan intuitif, terutama untuk pemula.

- Arduino Uno—board paling umum—memiliki 14 pin digital (6 mampu PWM), 6 pin analog, disuplai oleh mikrokontroler ATmega328P, dan bisa dihubungkan ke komputer via USB untuk pengunggahan kode


