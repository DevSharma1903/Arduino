
int red = 9;
int yellow = 6;
int delayT = 300;
int yellowBlink = 3;
int redBlink 5;
int j = 1;

void setup() {
  pinModes(red, OUTPUT);
  pinModes(yellow, OUTPUT);
}

void loop() {
  for(j = 1; j<= yellowBlink; j++){
  	digitalWrite(yellow, HIGH);
  	delay(delayT);
    digitalWrite(yellow, LOW);
  	delay(delayT);
  }
  
  for(j = 1; j<= redBlink; j++)
  {
  	digitalWrite(red, HIGH);
  	delay(delayT);
    digitalWrite(red, LOW);
  	delay(delayT);
  }
  
  
}