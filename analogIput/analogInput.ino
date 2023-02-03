//definição de variáveis
const int sensorPin = A0;
const int ledPin = 8;
int sensorValue = 0;
float sensorVoltage = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  sensorVoltage = map(sensorValue, 0, 1023, 0, 5);
  Serial.print("Voltage: ");
  Serial.print(sensorVoltage);
  Serial.print("V \n");
  
  digitalWrite(ledPin, HIGH);
  delay(sensorVoltage);
  digitalWrite(ledPin, LOW);
  delay(sensorVoltage);

  


}
