
int readPin = A2;
int readVal;
float V2 = 0.0;
String voltVal = "Voltage is = ";
int delayTime = 500;

void setup() {
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.print(voltVal);
  Serial.println(V2);
  delay(delayTime);
}