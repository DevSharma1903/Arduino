
int readPin = A2;
int readVal;
int delayTime = 500;
int redPin = 9;
float LEDVal;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  LEDVal = (255./1023.)*readVal;
  analogWrite(redPin, LEDVal);
  Serial.println(LEDVal);
}