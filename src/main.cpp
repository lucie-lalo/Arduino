#include <Arduino.h>

void OnLed(){
PORTB = PORTB | (1<<5);
}

void OffLed(){
PORTB = PORTB &~(1<<5);
}

void ledSetup(){
  DDRB = DDRB | (1<<5);
}

void setup() {
  ledSetup();
}

void loop() {
  OnLed();
  delay(1000);
  OffLed();
  delay(1000);
}