int readPin = A1;
int buzzPin = 6;
int dt = 300;
int potVal;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop()
{
  potVal = analogRead(readPin);
  Serial.println(potVal);
  delay(dt);
  
  if(potVal > 1000)
  {
    digitalWrite(buzzPin, HIGH);
  }
  
  if(potVal <= 1000)
  {
    digitalWrite(buzzPin, LOW);
  }
}