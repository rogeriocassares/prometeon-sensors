int brightness = 0;
int fadeAmount = 5; 

void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(9, brightness);
  Serial.print("Brightness = ");
  Serial.println(brightness);

  brightness = brightness + fadeAmount;

  if (brightness == 0 || brightness == 255) {
  fadeAmount = -fadeAmount ;
}

delay(5000);
}

