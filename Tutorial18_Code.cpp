int blinkNum;
int j;
int redPin = 11;
String msg = "Enter number of blinks: ";
void setup()
{
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);
  while(Serial.available() == 0)
  {
  		
  }
  blinkNum = Serial.parseInt();
  for(j=1; j<= blinkNum; j=j+1)
  { 
  	digitalWrite(redPin, HIGH);
    delay(500);
    digitalWrite(redPin, LOW);
    delay(500);
  }

}