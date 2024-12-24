
int LED = 9;
int amount = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, amount);
  
}
