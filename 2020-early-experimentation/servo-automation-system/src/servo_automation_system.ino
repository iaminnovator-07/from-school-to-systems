#include <Servo.h>

Servo myServo;

int potPin = A0;
int potValue;
int angle;

void setup() {

  myServo.attach(9);

  Serial.begin(9600);

}

void loop() {

  potValue = analogRead(potPin);

  angle = map(potValue, 0, 1023, 0, 180);

  myServo.write(angle);

  Serial.print("Servo Angle: ");
  Serial.println(angle);

  delay(15);

}
