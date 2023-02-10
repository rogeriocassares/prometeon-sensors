#include <Servo.h>

Servo servo;

int potPin = 0;
int analogicValue;
int servoState = 0;

void setup()
{
  servo.attach(9);
  Serial.begin(9600);
}

void loop()
{
  analogicValue = analogRead(potPin);
  Serial.println(analogicValue);
  int analogicMapped = map(analogicValue, 0, 1023, 0, 190);

  if (analogicValue > 500) {
    Serial.print("Servo State: ");
    Serial.println(servoState);
    
    switch (servoState) {
      case 0:
        servo.write(servoState);
        delay(2000);
        servoState = 30;
        break;
        
      case 30:
        servo.write(servoState);
        delay(1500);
        servoState = 120;
        break;
        
        case 120:
        servo.write(servoState);
        delay(5000);
        servoState = 80;
        break;

        case 80:
        servo.write(servoState);
        delay(1500);
        servoState = 170;
        break;

        case 170:
        servo.write(servoState);
        delay(5500);
        servoState = 0;
        break;
        
      default:
        servoState = 0;
        break;
    }
  }


  
}

