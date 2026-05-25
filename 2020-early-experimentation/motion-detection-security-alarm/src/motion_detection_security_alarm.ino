int pirSensor = 2;

int buzzer = 8;
int led = 9;

void setup() {

  pinMode(pirSensor, INPUT);

  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int motion = digitalRead(pirSensor);

  Serial.println(motion);

  if (motion == HIGH) {

    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);

  } else {

    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);

  }

  delay(100);

}
