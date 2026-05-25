int flexSensor = A0;

int led1 = 8;
int led2 = 9;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int flexValue = analogRead(flexSensor);

  Serial.println(flexValue);

  if (flexValue > 700) {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);

  } else {

    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);

  }

  delay(100);

}
