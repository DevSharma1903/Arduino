String light;
int j;
int redPin = 6;
int bluePin = 9;
int greenPin = 10;
String msg = "Enter light: ";
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);
  while(Serial.available() == 0)
  {
  		
  }
  light = Serial.readString();
  if(light == "Red")
  {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  	digitalWrite(bluePin, LOW);
  }
  
  if(light == "Blue")
  {
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, LOW);
	digitalWrite(greenPin, LOW);
  }
  
  if(light == "Green")
  {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
	digitalWrite(bluePin, LOW);
  }
  
  if(light == "Aqua")
  {
    analogWrite(greenPin, 255);
    digitalWrite(redPin, LOW);
	analogWrite(bluePin, 255);
  }
  
  if(light == "Orange")
  {
    analogWrite(greenPin, 80);
    analogWrite(redPin, 255);
	analogWrite(bluePin, 0);
  }

}