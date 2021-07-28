#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  //modi on]
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
}
