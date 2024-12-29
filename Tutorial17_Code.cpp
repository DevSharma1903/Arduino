int dTime = 100;
int redPin = 6;
int readPin = A1;
int potVal;
void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop()
{
  potVal = analogRead(readPin);
  Serial.println(potVal);
  delay(dTime);
  
  while(potVal >= 1000)
  {
    digitalWrite(redPin, HIGH);
    potVal = analogRead(readPin);
  	Serial.println(potVal);
    delay(dTime);
  }
  digitalWrite(redPin, LOW);
}