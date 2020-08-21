#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED0, LOW);
  delay(100);
  digitalWrite(PIN_LED0, HIGH);
  delay(250);
}