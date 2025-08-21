# Panduan Perulangan di Arduino: `for`, `while`, dan `do-while`

Selamat datang! 🎉  
Di sini kita akan belajar tentang **perulangan** dalam pemrograman Arduino: `for`, `while`, dan `do-while`. Panduan ini dirancang khusus untuk pemula agar mudah dipahami dalam sekali baca.

---

## 1. Perulangan `for`

**Apa itu?**  
`for` digunakan ketika kamu sudah tahu berapa kali kode harus dijalankan.

**Sintaks:**
```cpp
for (inisialisasi; kondisi; iterasi) {
  // kode yang ingin dijalankan berulang
}
```

**Contoh:**
```cpp
for (int i = 0; i < 5; i++) {
  Serial.println(i);
}
```

**Penjelasan:**
- `int i = 0` → memulai angka dari 0  
- `i < 5` → selama i kurang dari 5, kode di dalam `{}` akan dijalankan  
- `i++` → setiap selesai satu kali perulangan, nilai i bertambah 1  

Hasilnya: mencetak angka 0, 1, 2, 3, 4 ke Serial Monitor.

---

## 2. Perulangan `while`

**Apa itu?**  
`while` digunakan ketika kamu tidak tahu pasti berapa kali perulangan akan terjadi, tapi ada kondisi tertentu yang harus dipenuhi.

**Sintaks:**
```cpp
while (kondisi) {
  // kode yang ingin dijalankan berulang
}
```

**Contoh:**
```cpp
int i = 0;
while (i < 5) {
  Serial.println(i);
  i++;
}
```

**Penjelasan:**
- Periksa kondisi `i < 5`  
- Selama kondisi benar (`true`), jalankan kode di dalam `{}`  
- Jangan lupa `i++` supaya perulangan berhenti di suatu saat, jika tidak, akan terjadi **infinite loop**  

Hasilnya: mencetak angka 0, 1, 2, 3, 4 ke Serial Monitor.

---

## 3. Perulangan `do-while`

**Apa itu?**  
`do-while` hampir sama dengan `while`, tapi dijamin **blok kode dijalankan minimal satu kali** karena kondisi dicek setelah kode dijalankan.

**Sintaks:**
```cpp
do {
  // kode yang ingin dijalankan berulang
} while (kondisi);
```

**Contoh:**
```cpp
int i = 0;
do {
  Serial.println(i);
  i++;
} while (i < 5);
```

**Penjelasan:**
- Jalankan kode di `{}` dulu, baru cek kondisi `i < 5`  
- Sangat berguna jika kamu ingin memastikan kode dijalankan setidaknya sekali  

Hasilnya: mencetak angka 0, 1, 2, 3, 4 ke Serial Monitor.

---

## 💡 Tips Penting untuk Pemula

1. Gunakan **`for`** jika jumlah iterasi sudah diketahui.
2. Gunakan **`while`** jika jumlah iterasi tergantung kondisi tertentu.
3. Gunakan **`do-while`** jika kode harus dijalankan setidaknya sekali.
4. Pastikan kondisi perulangan akan menjadi **false** supaya program berhenti di suatu titik.
5. Bisa pakai **`break`** untuk menghentikan perulangan sebelum kondisi terpenuhi.

---

## 🔗 Referensi Resmi

- [For Loop - Arduino](https://docs.arduino.cc/reference/en/language/structure/control-structure/for/)
- [While Loop - Arduino](https://docs.arduino.cc/reference/en/language/structure/control-structure/while/)
- [Do-While Loop - Arduino](https://docs.arduino.cc/reference/en/language/structure/control-structure/do-while/)

---

## 📺 Video Tutorial

Untuk pemahaman lebih lanjut, kamu bisa menonton video tutorial berikut:

- [BELAJAR 7 PEMROGRAMAN ARDUINO - for loop dan while loop](https://www.youtube.com/watch?v=F3r0JbOl1Gs)

---

> Dengan memahami perulangan ini, kamu bisa membuat program Arduino yang **lebih kompleks dan interaktif** dengan lebih mudah.
