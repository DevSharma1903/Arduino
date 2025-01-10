int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int tiltPin=2;
int tiltStatus;
int mSpeed = 255;

void setup()
{
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
  Serial.begin(9600);
}

void loop()
{  
  tiltStatus = digitalRead(tiltPin);
  Serial.println(tiltStatus);
  
  
  
  if(tiltStatus == 0){	
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, LOW);
  analogWrite(speedPin, 0);
  }
  else{
  	digitalWrite(dir1, HIGH);
  	digitalWrite(dir2, LOW);
  	analogWrite(speedPin, mSpeed);
  }
  
}