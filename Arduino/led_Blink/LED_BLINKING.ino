//*******************************************************************************
// Project : LED Blink in Sensor Kit,  led 깜박임 센서만들기
// Board : Arduino Uno
//*******************************************************************************
#define LedPin  7

// 리셋을 누르거나 보드에 전원을 공급하면 설정 기능이 실행됩니다.
void setup() {
  // 디지털 핀 LED 초기화, 출력으로 BUILTIN
  pinMode(LedPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LedPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LedPin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
