int tiltPin = 2;
int tiltVal;
int redPin = 7;
int greenPin = 6;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
  Serial.begin(9600);
  
}

void loop()
{
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if(tiltVal == 1)
  {
  	digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  
  if(tiltVal == 0)
  {
  	digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
}