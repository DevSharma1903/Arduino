int LEDPin = 8;
int bPin = 12;
int bRead;
void setup()
{
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(bPin, INPUT);
  
}

void loop()
{
  bRead = digitalRead(bPin);
  Serial.println(bRead);
  delay(250);
  
  
}