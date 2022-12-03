#include "Pump.h"

Pump::Pump(int pinA, int pinB) {
  // Use 'this->' to make the difference between the
  // 'pin' attribute of the class and the 
  // local variable 'pin' created from the parameter.
  this->pinA = pinA;
  this->pinB = pinB;
  init(); //펌프 상태 정지로 초기화
}
void Pump::init() { // init 맴버 함수 정의
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  // Always try to avoid duplicate code.
  // Instead of writing digitalWrite(pin, LOW) here,
  // call the function off() which already does that
  off(); //펌프 종료
  state = PUMP_OFF;//펌프 상태 정지로 저장
}
void Pump::on() {//펌프 동작 함수 정의
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  state = PUMP_ON;
}
void Pump::off() {//펌프 정지 함수 정의
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  state = PUMP_OFF;
}

byte Pump::getState() {//펌프 상태 획득
  return state;
}
