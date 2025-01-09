int LEDPin = 8;
int bPin = 12;
int bRead;
int LEDState = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(bPin, INPUT);
  digitalWrite(LEDPin, LOW);
  
}

void loop()
{
  bRead = digitalRead(bPin);
  Serial.println(bRead);
  //delay(250);
  
  if(bRead == 1 && LEDState == 0)
  {
    digitalWrite(LEDPin, HIGH);
    LEDState = 1;
  }
  else if(bRead == 1 && LEDState == 1)
  {
  	digitalWrite(LEDPin, LOW);
    LEDState = 0;
  }
  else if(bRead == 0 && LEDState == 0)
  {
    digitalWrite(LEDPin, HIGH);
    LEDState = 1;
  }
  else if(bRead == 0 && LEDState == 1)
  {
  	digitalWrite(LEDPin, LOW);
    LEDState = 0;
  }
  
}