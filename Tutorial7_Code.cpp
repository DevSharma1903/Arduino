
int LED = 9;
int amount = 100;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, amount);
}
