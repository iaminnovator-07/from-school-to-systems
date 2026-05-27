#include <SoftwareSerial.h>

SoftwareSerial audioModule(10, 11);

void setup() {

  Serial.begin(9600);
  audioModule.begin(9600);

  Serial.println("Aurora Initialized");

  delay(2000);

  playAudio();

}

void loop() {

}

void playAudio() {

  Serial.println("Playing Educational Audio");

  audioModule.write(0x7E);
  audioModule.write(0xFF);
  audioModule.write(0x06);
  audioModule.write(0x03);
  audioModule.write(0x00);
  audioModule.write(0x00);
  audioModule.write(0x01);
  audioModule.write(0xEF);

}
