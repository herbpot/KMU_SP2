#define PIN_CODE 7

void setup() {
  pinMode(PIN_CODE,OUTPUT);
}

void loop() {
  digitalWrite(PIN_CODE,1);
  delay(1000);
  for (int i=0; i<5; i++) {
    digitalWrite(PIN_CODE,1);
    delay(100);
    digitalWrite(PIN_CODE,0);
    delay(100);
  }
  while(1){}

}
