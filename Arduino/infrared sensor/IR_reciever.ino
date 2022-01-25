//*******************************************************************************
// Project : IR sensor
// Board : Arduino Uno 
//*******************************************************************************
#include <IRremote.h>

int RECV_PIN=7; // 데이터 pin 번호 

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() { // 데이터를 읽어 오기 위한 시리얼 속도 
  Serial.begin(9600);
  irrecv.enableIRIn(); // 리모컨 시작
}
void loop() {
  if(irrecv.decode(&results)){ // 리모컨 값이 안들어 오면 pass
    Serial.print("Remode value : "); // 출력문
    Serial.println(results.value, HEX); // HEX 16진수 변환
    irrecv.resume();  
  }
  delay(100);
} 
