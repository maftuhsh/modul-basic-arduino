void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // for(int i= 0; i <= 100; i++){
  //   Serial.println(i);
  // }
  // Serial.println("Done");
// awal:
int i = 0;
while(i <= 10){ // selalu bernilai true
  Serial.println(i);
  i++;
}
// goto awal;
}

void loop() {
  // put your main code here, to run repeatedly:

}
