#include <Arduino.h>


//
//
//
void setup() {
  pinMode(PIN_LED0, OUTPUT);

  Serial.begin(115200);
  Serial.println("started");

  SerialUSB.begin(115200);
  SerialUSB.println("USB");
}


//
//
//
void loop() {
  digitalWrite(PIN_LED0, LOW);
  delay(100);
  digitalWrite(PIN_LED0, HIGH);
  delay(250);

  Serial.print(".");
  SerialUSB.println("*");
}