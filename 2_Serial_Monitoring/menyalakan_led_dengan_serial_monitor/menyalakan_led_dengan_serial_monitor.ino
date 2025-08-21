int LED = 13;
char Status;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    Status = Serial.read();
    Serial.println(Status);
    
  }
  if (Status == '1'){
    digitalWrite(LED, HIGH);
    Serial.println("LED Menyala");
    delay(1000);
  }
  if (Status == '0'){
    digitalWrite(LED, LOW);
    Serial.println("LED Mati");
    delay(1000);

  }

}
