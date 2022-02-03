#include <Arduino.h>
#define LED_MASK (1<<5)


void OnLed() {
  PORTB |= LED_MASK;
}

void OffLed() {
  PORTB &= ~LED_MASK;
}

void toggleLed(){
  PINB |= LED_MASK;
}

void ledSetup(){
  DDRB |= LED_MASK;
}

void setup() {
  ledSetup();
}

void loop() {
  toggleLed();
  delay(1000);
}