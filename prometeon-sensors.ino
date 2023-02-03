const int buttonPin = 7;
const int ledPin = 8;

int buttonCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);

}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonCounter++;
      Serial.println("The button was pressed!");
      Serial.print("Counter: ");
      Serial.println(buttonCounter);
      Serial.print("Delay time: ");
      Serial.println(buttonCounter*10);
      Serial.println("");
    }
    delay(20);
  }
  lastButtonState = buttonState;

  digitalWrite(ledPin,HIGH);
  delay(10*buttonCounter);
  digitalWrite(ledPin,LOW);
  delay(10*buttonCounter);

  if(buttonCounter == 25){
    buttonCounter = 0;
  }

//  if (buttonCounter % 4 == 0) {
//    digitalWrite(ledPin, HIGH);
//  } else {
//    digitalWrite(ledPin, LOW);
//  }





}
