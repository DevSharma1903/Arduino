#include <Servo.h>
Servo Xservo;
Servo Yservo;
int sPin = 2;
int xPin = A0;
int yPin = A1;
int XSPin = 9;
int YSPin = 10;
int buzzPin = 7;
int WVx;
int WVy;
int dt = 200;
int xVal;
int yVal;
int sVal;
int readVal;

void setup()
{
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  pinMode(XSPin, OUTPUT);
  pinMode(YSPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  digitalWrite(sPin, HIGH);
  
  Xservo.attach(XSPin);
  Yservo.attach(YSPin);
  
}

void loop()
{
  xVal = analogRead(xPin);
  WVx= (180./1023.)*xVal;
  yVal = analogRead(yPin);
  WVy= (180./1023.)*yVal;
  sVal = digitalRead(sPin);
  
  Xservo.write(WVx);
  Yservo.write(WVy);
  
  delay(dt);
  
  if(sVal == 0)
  {
  	digitalWrite(buzzPin, HIGH);
  }
  else
  {
  	digitalWrite(buzzPin, LOW);
  }
  
  Serial.print("X Value = ");
  Serial.print(xVal);
  Serial.print(" Y Value = ");
  Serial.print(yVal);
  Serial.print(" Switch state is: ");
  Serial.println(sVal);
}