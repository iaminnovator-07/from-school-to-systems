#include <Servo.h>

Servo dispenserServo;

int trigPin = 9;
int echoPin = 10;

long duration;
int distance;

void setup() {

  dispenserServo.attach(6);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);

}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance < 10) {

    dispenserServo.write(90);
    delay(2000);

    dispenserServo.write(0);

  }

  delay(500);

}
