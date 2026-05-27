#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11);

char command;

void setup() {

  Serial.begin(9600);
  bluetooth.begin(9600);

  Serial.println("Indian Aurora Initialized");

}

void loop() {

  if (bluetooth.available()) {

    command = bluetooth.read();

    Serial.println(command);

    if (command == 'A') {

      playMaharashtraInfo();

    }

    else if (command == 'B') {

      playGujaratInfo();

    }

    else if (command == 'C') {

      playDelhiInfo();

    }

  }

}

void playMaharashtraInfo() {

  Serial.println("Playing Maharashtra Information");

}

void playGujaratInfo() {

  Serial.println("Playing Gujarat Information");

}

void playDelhiInfo() {

  Serial.println("Playing Delhi Information");

}
