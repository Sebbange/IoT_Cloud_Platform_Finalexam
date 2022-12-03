#include <Arduino.h>

#define PUMP_OFF 0
#define PUMP_ON 1

class Pump { // 펌프 클래스
  private:
    int pinA;
    int pinB;
    byte state;

  public:
    Pump(int pinA, int pinB); //펌프핀 초기화
    void init();//펌프 상태 정지로 초기화
    void on(); //펌프 동작
    void off(); //펌프 정지
    byte getState(); //펌프 상태 획득
};
