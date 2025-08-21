int i;
void setup() {
  Serial.begin(9600);
  delay(2000); // tunggu 2 detik biar koneksi serial siap
  Serial.println("Hello Arduino");
  Serial.println("Day 1 belajar Arduino");
}

void loop() {
  if (Serial.available() > 0){
    String s = Serial.readString();
    Serial.println(s);
  }
}

