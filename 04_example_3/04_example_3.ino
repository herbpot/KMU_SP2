#define PIN_LED 13
unsigned int count;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial) {
    ;
  }

  Serial.println("Hello World!");
  count = 0;
  digitalWrite(PIN_LED, count);
}

void loop() {
  Serial.println(++count);
  digitalWrite(PIN_LED, count%2);
  delay(1000);
}
