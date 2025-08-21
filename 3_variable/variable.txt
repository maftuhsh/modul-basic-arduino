# Pengenalan Variabel di Arduino

##  Apa itu Variabel?
- Variabel = "kotak penyimpanan data" di memori komputer.
- Setiap variabel punya:
  - Nama (contoh: sensorValue)
  - Tipe (jenis datanya)
  - Nilai (yang disimpan)

Variabel dipakai untuk menyimpan angka, teks, atau nilai logika yang nantinya bisa dipakai dalam program.

---

##  Tipe-Tipe Data Dasar di Arduino

1. **void**
   - Untuk mendefinisikan fungsi yang **tidak mengembalikan nilai**.
   - Contoh: `void setup() { ... }`

2. **bool / boolean**
   - Menyimpan hanya dua nilai: `true` (benar) atau `false` (salah).
   - Menggunakan 1 byte

3. **byte** (atau `unsigned char`)
   - Angka bulat tanpa tanda (non-negatif), rentangnya **0–255**.
   - Ukuran: 1 byte

4. **char**
   - Menyimpan satu karakter (contoh: 'A'), berdasarkan kode ASCII.
   - Rentangnya: –128 sampai 127

5. **unsigned char**
   - Sama dengan byte, rentangnya **0–255**.

6. **int**
   - Menyimpan angka bulat (positif dan negatif).
   - Pada Arduino UNO (ATmega): –32 768 sampai 32 767 (2 byte)

7. **unsigned int**
   - Sama seperti int, tapi hanya untuk angka positif: **0–65 535**

8. **word**
   - Mirip `unsigned int`: **0–65 535**, 2 byte

9. **short**
   - Sama seperti `int`, ukuran 2 byte

10. **long**
    - Angka bulat besar, rentang: –2 147 483 648 sampai 2 147 483 647 (4 byte)

11. **unsigned long**
    - Sama seperti long, tapi hanya positif: **0–4 294 967 295** (4 byte)

12. **float**
    - Angka desimal (pecahan), ukuran 4 byte. Contoh: 3.14

13. **double**
    - Double precision floating-point. Di UNO ukurannya sama seperti float (4 byte); di board seperti Due bisa 8 byte

14. **String**
    - Untuk teks (kata atau kalimat). Contoh: "Halo"

---

##  Tipe Data Lain & Struktur

Arduino juga mendukung:
- **struct** — gabungan beberapa variabel jadi satu paket
- **enum** — daftar konstanta bernama untuk nilai tetap
- **typedef** — alias untuk tipe data agar lebih mudah dibaca

---

##  Scope Variabel (Cakupan Penggunaan)

- **Global**: Dideklarasikan di luar fungsi, bisa digunakan di mana saja dalam program
- **Local**: Di dalam fungsi (setup/loop), hanya berlaku di situ saja
- **Formal parameter**: Variabel di dalam tanda kurung fungsi, jadi placeholder saat fungsi dipanggil

---

##  Contoh Deklarasi Sederhana

int sensorValue = 0;
float voltage = 3.3;
bool isPressed = false;
String name = "Arduino";

---

##  Ringkasan Tipe Data

| Tipe             | Ukuran   | Contoh Rentang atau Contoh                  |
|------------------|----------|---------------------------------------------|
| bool             | 1 byte   | true / false                                |
| byte             | 1 byte   | 0–255                                       |
| char             | 1 byte   | –128–127, satu karakter ASCII               |
| unsigned int / word | 2 byte | 0–65,535                                  |
| int / short      | 2 byte   | –32,768–32,767                              |
| long             | 4 byte   | –2,147,483,648–2,147,483,647                |
| unsigned long    | 4 byte   | 0–4,294,967,295                             |
| float            | 4 byte   | angka desimal seperti 3.14                  |
| double           | 4 atau 8 byte | presisi tinggi (tergantung board)      |
| String           | variabel | teks atau kalimat                           |

---

##  Penutup

Variabel itu seperti kotak penyimpanan bernama dan punya jenis data. Penting untuk memilih tipe data yang tepat agar program berjalan efisien dan sesuai kebutuhan.
