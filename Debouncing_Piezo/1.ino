#include<util/delay.h>
#define SWITCH 2
#define LED 13
#define DELAY 100

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(SWITCH, INPUT_PULLUP);
  attachInterrupt(INT0, LedState, FALLING);
}

void loop(){}
void LedState(){
  _delay_ms(DELAY);
  if(digitalRead(SWITCH)==HIGH)
  return;
  digitalWrite(LED, !digitalRead(LED));
}

