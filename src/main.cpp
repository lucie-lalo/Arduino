#include <Arduino.h>

void toggleLed(){
  PINB = PINB | (1<<5);
}

void setup() {
   DDRB = DDRB | (1<<5);
}

void loop() {
  toggleLed();
  delay(1000);
}