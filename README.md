📘 Modul Arduino & IoT untuk Pemula — Dari Nol Banget
1. Dasar Pemrograman Arduino (Bahasa C++ untuk Pemula)

Sebelum kita bikin project IoT, kita harus ngerti dulu “bahasa” yang dipakai Arduino, yaitu C++ versi sederhana.

1.1 Struktur Program Arduino

Setiap program Arduino minimal punya dua bagian:

void setup() {
  // Bagian ini jalan SEKALI saat Arduino pertama kali nyala
}

void loop() {
  // Bagian ini jalan BERULANG-ULANG tanpa henti
}


🔹 setup() = Persiapan awal (misalnya: set pin jadi input/output, mulai komunikasi serial).
🔹 loop() = Program utama, yang akan jalan terus.

1.2 Variabel

Variabel = tempat menyimpan data di memori.
Contoh:

int umur = 18;        // angka bulat
float suhu = 25.5;    // angka desimal
char huruf = 'A';     // karakter tunggal
String nama = "Budi"; // teks (string)

1.3 Tipe Data Penting
Tipe Data	Contoh	Keterangan
int	10	Bilangan bulat (-32k s/d 32k)
long	100000	Bilangan bulat lebih besar
float	3.14	Bilangan desimal
char	'A'	Karakter tunggal
String	"Halo"	Teks panjang
bool	true / false	Logika benar/salah
1.4 Operator Dasar

Operator = simbol untuk hitung/membandingkan.

int a = 10;
int b = 3;

int tambah = a + b;   // 13
int kurang = a - b;   // 7
int kali   = a * b;   // 30
int bagi   = a / b;   // 3
int sisa   = a % b;   // 1

bool lebihBesar = a > b; // true
bool sama       = a == b; // false

1.5 Kondisi (if/else)

Dipakai untuk mengambil keputusan.

int suhu = 30;

if (suhu > 28) {
  // kalau suhu lebih dari 28
  Serial.println("Panas!");
} else {
  Serial.println("Normal.");
}

1.6 Perulangan (loop)

Untuk mengulang perintah.

// For loop
for (int i = 0; i < 5; i++) {
  Serial.println(i);  // cetak 0 sampai 4
}

// While loop
int j = 0;
while (j < 5) {
  Serial.println(j);
  j++;
}

1.7 Fungsi

Fungsi = blok kode yang bisa dipanggil berkali-kali.

int kaliDua(int x) {
  return x * 2;
}

void loop() {
  int hasil = kaliDua(5); // hasil = 10
  Serial.println(hasil);
}

1.8 Input & Output Arduino

Arduino bisa:

Output → memberi sinyal (nyalain LED, jalanin motor)

Input → membaca sensor (tombol, suhu, cahaya)

Perintah dasarnya:

pinMode(pin, OUTPUT);          // set pin jadi output
pinMode(pin, INPUT);           // set pin jadi input
digitalWrite(pin, HIGH/LOW);   // kasih sinyal nyala/mati
digitalRead(pin);              // baca input tombol
analogRead(pin);               // baca sensor analog (0-1023)
analogWrite(pin, nilai);       // kasih PWM (0-255)

2. Contoh Latihan Dasar Pemrograman (Tanpa Rangkaian)

Sekarang kita gabungkan konsep di atas ke contoh yang simpel:

2.1 Cetak teks ke Serial Monitor
void setup() {
  Serial.begin(9600); // mulai komunikasi serial
}

void loop() {
  Serial.println("Halo, Arduino!");
  delay(1000); // tunggu 1 detik
}


👉 Hasil: tiap 1 detik muncul teks di Serial Monitor.

2.2 Variabel + If
void setup() {
  Serial.begin(9600);
}

void loop() {
  int suhu = 32;

  if (suhu > 30) {
    Serial.println("Panas!");
  } else {
    Serial.println("Normal.");
  }
  delay(1000);
}


👉 Hasil: selalu cetak "Panas!" karena suhu = 32.

2.3 Perulangan For
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 1; i <= 5; i++) {
    Serial.println(i);
    delay(500);
  }
}


👉 Hasil: angka 1–5 muncul di Serial Monitor.
