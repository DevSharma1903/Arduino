int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 1;

void setup()
{
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  analogWrite(speedPin, mSpeed);
}