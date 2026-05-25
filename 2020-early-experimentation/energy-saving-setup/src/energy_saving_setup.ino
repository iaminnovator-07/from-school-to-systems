int ldr = A0;

int relay = 8;
int led = 9;

void setup() {

  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int lightValue = analogRead(ldr);

  Serial.println(lightValue);

  if (lightValue < 500) {

    digitalWrite(relay, HIGH);
    digitalWrite(led, HIGH);

  } else {

    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);

  }

  delay(100);

}
