int redPin = 9;
int bluePin = 10;
int greenPin = 11;
int dt = 500;
String myLight;
String msg = "Enter color: ";
void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  Serial.print(msg);
  while(Serial.available() == 0)
  {}
  myLight = Serial.readString();
  
  if(myLight = "Red")
  {
  	digitalWrite(redPin, HIGH);
  }
  
  if(myLight = "Blue")
  {
  	digitalWrite(bluePin, HIGH);
  }
  
  if(myLight = "Green")
  {
  	digitalWrite(greenPin, HIGH);
  }
}