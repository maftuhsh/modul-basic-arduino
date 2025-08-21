# Struktur Kontrol Arduino (If, Else If, Else, Switch)

Ini adalah panduan sederhana untuk memahami **struktur kontrol** dalam pemrograman Arduino. Penjelasan dibuat khusus untuk pemula agar mudah dipahami.

---

## 1. If Statement

Digunakan untuk memeriksa suatu kondisi. Jika kondisi benar (`true`), blok kode di dalam `if` akan dijalankan.

Contoh:
int suhu = 30;
if (suhu > 25) {
  Serial.println("Suhu tinggi");
}

> Jika `suhu` lebih besar dari 25, maka akan tampil "Suhu tinggi".

---

## 2. Else Statement

Digunakan bersama `if`. Jika kondisi `if` salah (`false`), maka blok kode di dalam `else` yang dijalankan.

Contoh:
int suhu = 20;
if (suhu > 25) {
  Serial.println("Suhu tinggi");
} else {
  Serial.println("Suhu normal");
}

> Karena `suhu` tidak lebih besar dari 25, akan tampil "Suhu normal".

---

## 3. Else If Statement

Digunakan untuk memeriksa beberapa kondisi berurutan. Jika kondisi pertama salah, akan diperiksa kondisi berikutnya.

Contoh:
int suhu = 15;
if (suhu > 30) {
  Serial.println("Suhu sangat tinggi");
} else if (suhu > 25) {
  Serial.println("Suhu tinggi");
} else if (suhu > 20) {
  Serial.println("Suhu normal");
} else {
  Serial.println("Suhu rendah");
}

> Kondisi diperiksa berurutan. Jika semua salah, blok `else` dijalankan.

---

## 4. Switch Statement

Digunakan untuk memeriksa nilai variabel terhadap beberapa kemungkinan. Efisien saat ada banyak kondisi.

Contoh:
int hari = 3;
switch (hari) {
  case 1:
    Serial.println("Senin");
    break;
  case 2:
    Serial.println("Selasa");
    break;
  case 3:
    Serial.println("Rabu");
    break;
  default:
    Serial.println("Hari tidak valid");
}

> Jika `hari = 3`, tampil "Rabu". Jika tidak ada case yang cocok, `default` dijalankan.

---

## Tips untuk Pemula

- Gunakan `if` untuk kondisi sederhana.
- Gunakan `else if` untuk memeriksa beberapa kondisi.
- Gunakan `switch` untuk banyak nilai dari satu variabel.
- Selalu gunakan `break` di `switch` untuk mencegah eksekusi lanjut ke case berikutnya.
- Tutup setiap blok kode dengan `{}` meskipun hanya satu baris.

---

## Referensi Resmi

- [Arduino If Statement](https://docs.arduino.cc/built-in-examples/control-structures/ifStatementConditional)
- [Arduino Switch Statement](https://www.arduino.cc/reference/en/language/structure/control-structure/switch/)

> Dengan memahami struktur kontrol ini, kamu bisa mulai membuat program Arduino yang lebih kompleks dan interaktif!

