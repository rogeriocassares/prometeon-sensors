void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int dataV = Serial.available();
  Serial.println(dataV);

  if (dataV != 0){
    int dataS = Serial.read();
    Serial.println(dataS);
    Serial.write(dataS);
  }
  delay(500);
}
