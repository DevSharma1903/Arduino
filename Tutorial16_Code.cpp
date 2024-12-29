int red = 9;
int j;
int dTime = 500;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(j=1; j<=10; j=j+1){
    Serial.println(j);
    delay(dTime);
  }
  Serial.println();
}