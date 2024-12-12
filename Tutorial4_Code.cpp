
int LED = 13;
int dot = 100;
int dash = 600;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  //S
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(500);
  
  
  
  //O
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dash);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dash);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(800);
  
  //S
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  
  delay(1000);
  
}
