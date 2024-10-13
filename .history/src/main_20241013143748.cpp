#include <Arduino.h>
void setup() {
    pinMode(5 , OUTPUT);
    pinMode(4 , OUTPUT);
}
void loop() {
    digitalWrite(5 , HIGH);
    delay(10);
    digitalWrite(4 , HIGH);
    delay(20);
    digitalWrite(4 , LOW);
    delay(10);
    digitalWrite(5 , LOW);
    delay(20);
}