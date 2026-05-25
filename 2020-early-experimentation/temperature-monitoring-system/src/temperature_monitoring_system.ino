int tempSensor = A0;

int led = 8;

float temperature;

void setup() {

  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int sensorValue = analogRead(tempSensor);

  float voltage = sensorValue * (5.0 / 1023.0);

  temperature = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature > 35) {

    digitalWrite(led, HIGH);

  } else {

    digitalWrite(led, LOW);

  }

  delay(1000);

}
