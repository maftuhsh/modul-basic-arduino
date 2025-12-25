#define B1 A2
#define B2 A3
#define Ditekan LOW

int nilai = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(B1, INPUT_PULLUP);
  pinMode(B2, INPUT_PULLUP);
  Serial.println("Belajar If Else");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(B1) == Ditekan){
    while(digitalRead(B1) == Ditekan){}
    Serial.println("Nilai :" + String(nilai));
    nilai++;
  } else if(digitalRead(B2) == Ditekan){
    while(digitalRead(B2) == Ditekan){}
    Serial.println("Nilai :" + String(nilai));
    nilai--;
  }
  if (nilai > 2) {
    Serial.println("Nilai lebih dari 2");
    nilai = 1;
  } else if(nilai < 1){
    Serial.println("Nilai Kurang dari 1");
    nilai = 2;
  }
  switch (nilai){
    case 1:
      Serial.println("CASE 1");
      break;
      delay(1000);
    case 2:
      Serial.println("CASE 2");
      break;
      delay(1000);
  }

}
