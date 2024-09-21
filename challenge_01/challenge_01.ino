#define LED 7

int d = 100;
int p = 0;
int i = 1;

void setup() {
  pinMode(LED, OUTPUT);
  set_period(100);
}

void loop() {
  digitalWrite(LED, 1);
  delayMicroseconds(d*1000000/p);
  digitalWrite(LED, 0);
  delayMicroseconds((100-d)*1000000/p);
  if (d<=0 || d >= 100){
    i = -i;
  }
  set_duty(d + i);
}

void set_duty(int duty) {
  d = duty;
}

void set_period(int period) {
  p = period;
}
