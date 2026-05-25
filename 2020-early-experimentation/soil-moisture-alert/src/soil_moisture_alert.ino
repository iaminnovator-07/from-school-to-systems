int moistureSensor = A0;

int buzzer = 8;
int led = 9;

void setup() {

  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int moistureValue = analogRead(moistureSensor);

  Serial.println(moistureValue);

  if (moistureValue > 700) {

    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);

  } else {

    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);

  }

  delay(100);

}
