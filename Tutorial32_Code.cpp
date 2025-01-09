int sPin = 2;
int xPin = A0;
int yPin = A1;
int dt = 200;
int xVal;
int yVal;
int sVal;

void setup()
{
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  digitalWrite(sPin, HIGH);
  
}

void loop()
{
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  
  delay(dt);
  
  Serial.print("X Value = ");
  Serial.print(xVal);
  Serial.print(" Y Value = ");
  Serial.print(yVal);
  Serial.print(" Switch state is: ");
  Serial.println(sVal);
}