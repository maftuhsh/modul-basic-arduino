# 📘 Modul Belajar Arduino & IoT (Fundamental Pemrograman dari Nol)

## 🤔 Apa itu Arduino?

Arduino adalah sebuah papan elektronik kecil (microcontroller) yang bisa diprogram untuk membaca input (misalnya sensor, tombol, suara, cahaya) dan mengendalikan output (misalnya lampu LED, motor, layar).

Contoh sederhananya:

Arduino membaca sensor suhu → kalau panas di atas 30°C → Arduino menyalakan kipas otomatis.

Arduino membaca tombol ditekan → Arduino menyalakan lampu.

👉 Jadi, Arduino itu ibarat otaknya benda elektronik, seperti otak manusia yang menerima informasi dari panca indera lalu memberi perintah ke tubuh.anjut ke latihan hardware & IoT.


---
## ⚡ Kenapa Harus Arduino?

Kenapa banyak orang (terutama pemula) belajar pakai Arduino dulu?

Mudah Dipahami → Arduino pakai bahasa pemrograman yang sederhana (turunan C++).

Murah & Banyak di Pasaran → Harga board Arduino (atau klonnya) relatif murah, bahkan di bawah Rp 100 ribu.

Banyak Tutorial → Karena populer, banyak banget panduan, proyek, dan komunitasnya.

Kompatibel dengan Banyak Sensor → Bisa langsung dipasang dengan sensor suhu, cahaya, kelembapan, WiFi, Bluetooth, dsb.

Langkah Awal ke IoT → Setelah bisa Arduino, gampang lanjut ke ESP32/ESP8266 untuk bikin proyek Internet of Things (IoT).

👉 Arduino cocok banget buat pemula yang mau belajar dunia elektronik, robotik, dan IoT.

---

🛠️ Bagaimana Cara Menggunakan Arduino?

Langkah umumnya seperti ini:

Siapkan Alat

Papan Arduino (misalnya Arduino Uno).

Kabel USB untuk menghubungkan ke laptop/PC.

(Opsional) sensor atau komponen elektronik (LED, resistor, motor, dll).

Install Software Arduino IDE

Unduh di https://www.arduino.cc/en/software.

Software ini digunakan untuk menulis kode dan mengirimkannya ke Arduino.

Tulis Program

Semua program Arduino terdiri dari:
```
void setup() {
  // Bagian ini jalan sekali saat Arduino mulai
}

void loop() {
  // Bagian ini jalan terus berulang-ulang
}

```

Upload Program ke Arduino

Sambungkan Arduino ke laptop pakai kabel USB.

Pilih board Arduino dan port di Arduino IDE.

Klik tombol Upload (ikon panah ke kanan).

Arduino akan langsung menjalankan programnya.
