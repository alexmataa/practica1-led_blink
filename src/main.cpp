#include <Arduino.h>

#define LED 15

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  Serial.println("ON");
  delay(1000);
  digitalWrite(LED,LOW);
  Serial.println("OFF");
  delay(1000);
}