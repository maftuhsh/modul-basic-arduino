INPUT DAN OUTPUT PADA ARDUINO
==============================

Arduino adalah papan kecil yang bisa "merasakan" dan "mengontrol" benda-benda di dunia nyata lewat pin-pin yang ada di board.

1. PIN DIGITAL (Digital I/O)
----------------------------
- Bisa jadi **INPUT** (membaca sinyal) atau **OUTPUT** (mengirim sinyal).
- Fungsi:
    pinMode(pin, INPUT)      → membaca tombol atau sensor sederhana
    pinMode(pin, OUTPUT)     → menyalakan LED, buzzer, relay
- Nilai digital cuma ada dua: HIGH (5V) atau LOW (0V)
- Contoh:
    - Tombol ditekan → HIGH
    - LED menyala → HIGH

2. PIN ANALOG (Analog Input)
-----------------------------
- Pin A0–A5 bisa baca tegangan dari sensor (0–5V)
- Arduino mengubah tegangan ini jadi angka 0–1023
- Cocok untuk sensor cahaya, potensiometer, suhu

3. PWM (Output Tiruan / Analog Output)
--------------------------------------
- Arduino tidak punya output analog asli, tapi bisa “miru” dengan PWM
- PWM = sinyal digital ON/OFF cepat → menghasilkan tegangan rata-rata
- Pin PWM: 3,5,6,9,10,11 (ada tanda ~)
- Fungsi:
    analogWrite(pin, 0–255) → 0 = mati, 255 = penuh terang
- Contoh: meredupkan LED, kontrol motor

4. KOMUNIKASI
-------------
- **Serial (UART)**: Pin 0 (RX), 1 (TX) untuk komunikasi komputer
- **SPI**: Pin 10 (SS), 11 (MOSI), 12 (MISO), 13 (SCK) → komunikasi cepat ke modul
- **I²C / TWI**: Pin A4 (SDA), A5 (SCL) → komunikasi ke banyak modul dengan dua kabel
- **Interrupt**: Pin 2,3 → merespon perubahan sinyal langsung
- **AREF**: Pin referensi untuk analog input

5. RINGKASAN PIN ARDUINO UNO
-----------------------------
| Jenis I/O       | Pin & Fungsi                               |
|-----------------|--------------------------------------------|
| Digital I/O     | 0–13 → HIGH/LOW                        |
| Analog Input    | A0–A5 → 0–1023                     |
| PWM Output      | 3,5,6,9,10,11 → analogWrite()            |
| Serial UART     | 0 (RX), 1 (TX)                              |
| SPI             | 10,11,12,13                                 |
| I²C         | A4 (SDA), A5 (SCL)                           |
| Interrupt       | 2,3 → tangkap perubahan sinyal          |
| AREF            | Pin referensi tegangan                       |

6. CATATAN PENTING UNTUK PEMULA
--------------------------------
- Gunakan INPUT_PULLUP untuk tombol agar tidak “ngambang”
- Output pin aman untuk ~20mA, gunakan resistor atau driver jika lebih besar
- PWM bisa meredupkan LED atau atur kecepatan motor
- Serial, SPI, I²C → cara Arduino berbicara ke sensor/modul/komputer

---

Sekarang Arduino bisa "mendengar" (input) dan "berbicara" (output) dengan mudah!

