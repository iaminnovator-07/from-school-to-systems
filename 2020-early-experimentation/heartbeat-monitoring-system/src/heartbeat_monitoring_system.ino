int pulseSensor = A0;

int led = 13;

void setup() {

  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int pulseValue = analogRead(pulseSensor);

  Serial.println(pulseValue);

  if (pulseValue > 550) {

    digitalWrite(led, HIGH);

  } else {

    digitalWrite(led, LOW);

  }

  delay(50);

}
