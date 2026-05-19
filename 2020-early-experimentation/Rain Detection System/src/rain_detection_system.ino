int rainSensor = A0;
int led = 8;

void setup() {

  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int rainValue = analogRead(rainSensor);

  Serial.println(rainValue);

  if (rainValue < 500) {

    digitalWrite(led, HIGH);

  } else {

    digitalWrite(led, LOW);

  }

  delay(100);

}
