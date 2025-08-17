# Belajar Arduino Dasar – Fungsi (void)

Video ini membahas konsep dasar dari **fungsi dalam pemrograman Arduino**, khususnya penggunaan `void`, `void setup()`, dan `void loop()`.

---

## Apa itu `void`?
`void` adalah kata kunci dalam pemrograman Arduino yang digunakan untuk mendefinisikan fungsi yang **tidak mengembalikan nilai** apa pun ketika dipanggil.

---

## Fungsi `void setup()`
- Dijalankan **sekali saja di awal** program saat Arduino dinyalakan atau di-reset.
- Digunakan untuk **pengaturan awal**, seperti:
  - Menentukan mode pin (INPUT atau OUTPUT).
  - Menginisialisasi komunikasi serial dengan komputer (misalnya `Serial.begin(9600);`).

---

## Fungsi `void loop()`
- Setelah `setup()` selesai, `loop()` akan terus dijalankan secara **berulang selama Arduino menyala**.
- Biasanya digunakan untuk:
  - Membaca input dari sensor atau perangkat.
  - Mengirim output ke komponen (LED, motor, dll).
  - Mengeksekusi logika utama program.

---

## Cara Mudah Memahaminya
Bayangkan Arduino seperti seorang asisten:

- **`setup()` = Pembuka acara** → dilakukan sekali di awal.
- **`loop()` = Rangkaian acara utama** → terus diputar berulang selama acara berlangsung.

---

## Contoh Program Sederhana
```cpp
void setup() {
  pinMode(13, OUTPUT);      // Atur pin 13 sebagai output
  Serial.begin(9600);       // Mulai komunikasi serial
}

void loop() {
  digitalWrite(13, HIGH);   // Nyalakan LED
  delay(1000);              // Tunggu 1 detik
  digitalWrite(13, LOW);    // Matikan LED
  delay(1000);              // Tunggu 1 detik
}
```

**Penjelasan:**
- `setup()` menyiapkan LED dan komunikasi serial.
- `loop()` menyalakan LED selama 1 detik, mematikannya 1 detik, lalu mengulang terus.

---

## Ringkasan dalam Tabel
| Fungsi        | Peran Utama                                  | Waktu Eksekusi        |
|---------------|---------------------------------------------|------------------------|
| `void setup()` | Inisialisasi awal (pin, serial, dsb.)       | Sekali saat mulai      |
| `void loop()`  | Jalankan logika utama program berulang      | Selama board aktif     |
