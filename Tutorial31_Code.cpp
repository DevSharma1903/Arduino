#include <Servo.h>
int lightVal;
int lightPin = A4;
int angle;
Servo myServo;
int servoPin = 9;
void setup()
{
  pinMode(lightPin, INPUT);
  pinMode(servoPin, OUTPUT);
  myServo.attach(servoPin);
  Serial.begin(9600);
  
}

void loop()
{
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  
  angle = (-16./90.)*lightVal+16.*928./90.;
  myServo.write(angle);
}