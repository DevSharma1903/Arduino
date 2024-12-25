
int readPin = A2;
int readVal;
float V2 = 0.0;
String voltVal = "Voltage is = ";
int delayTime = 500;
int redPin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  V2 = (5./1023.)*readVal;
  if(V2>4.0)
  {
  	digitalWrite(redPin, HIGH);
  }
  
  if(V2<4.0)
  {
  	digitalWrite(redPin, LOW);
  }
  Serial.print(voltVal);
  Serial.println(V2);
  delay(delayTime);
}