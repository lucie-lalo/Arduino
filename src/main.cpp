#include <Arduino.h>
#define LED_MASK (1<<5)


void toggleLed(){
  PINB |= LED_MASK;
}

void ledSetup(){
  DDRB |= LED_MASK;
}

void timerSetup(){
  TCCR1A = 0;
  TCCR1B = (1<< WGM12) | (1<< CS12) | (1<<CS10);
  OCR1A = 15625;
  TIMSK1 = (1 << OCIE1A);
}

ISR(TIMER1_COMPA_vect){
  toggleLed();
}

void setup() {
  ledSetup();
}

void loop() {

}