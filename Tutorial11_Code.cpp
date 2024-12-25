
int j =0;
int delayTime = 500;
String myStr = "J = ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(myStr);
    Serial.println(j);
  	j += 1;
  	delay(delayTime);
}
