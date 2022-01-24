//*******************************************************************************
// Project : SERVO_MOTOR 서보모터 컨트롤
// Board : Arduino Uno 
// PWM 제어란? (Pulse Width Modulation)
// Pulse : 사각파, Width : 폭 , Modulation : 변조
// PWM 제어의 예로 DC 모터의 속도제어와 LED의 밝기 등을 조절하는 용도로 많이 쓰입니다. 
// MOSFET을 빠른 주기로 스위칭을 하게 되면 duty의 평균값에 해당하는 전류가 흐르게 되는 것이 PWM으로 속도 제어를 하는 원리입니다.
//*******************************************************************************

#include <Servo.h>

#define SERVOPIN 9

Servo myservo;  // servo object 생성

int pos = 0;    // 각도

void setup() {
  myservo.attach(SERVOPIN);  // attaches to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    // 180도를 돌고 옆으로 1도씩 옆으로 초기화 이동하면서 365도를 돌 수 있다
    myservo.write(pos);              
    delay(5);     // 진동폭을 짧게 줄여서 모터의 회전속도를 조절한다,                   
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(5);                       
  }
}
