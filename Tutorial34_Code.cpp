int buttonPin = 2;
int buttonVal;
int dt = 150;
void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
}

void loop()
{
  buttonVal = digitalRead(buttonPin);
  Serial.print("Your button is: ");
  Serial.println(buttonVal);
  delay(dt);
}