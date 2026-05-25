char data;

int led1 = 8;
int led2 = 9;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  if (Serial.available()) {

    data = Serial.read();

    Serial.println(data);

    if (data == 'A') {

      digitalWrite(led1, HIGH);

    }

    else if (data == 'a') {

      digitalWrite(led1, LOW);

    }

    else if (data == 'B') {

      digitalWrite(led2, HIGH);

    }

    else if (data == 'b') {

      digitalWrite(led2, LOW);

    }

  }

}
