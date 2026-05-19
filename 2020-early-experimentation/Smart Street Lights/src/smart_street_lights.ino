int ldr = A0;
int irSensor = 2;

int led1 = 8;
int led2 = 9;
int led3 = 10;

void setup() {

  pinMode(irSensor, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int lightValue = analogRead(ldr);
  int motion = digitalRead(irSensor);

  Serial.println(lightValue);

  if (lightValue < 500) {

    if (motion == HIGH) {

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);

    } else {

      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);

    }

  } else {

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

  }

  delay(100);

}
