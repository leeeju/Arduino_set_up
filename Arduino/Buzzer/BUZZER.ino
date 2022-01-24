//*******************************************************************************
// Project : Buzzer in Learning Kit / 능동부저, 수동부저를 사용해서 비프음을 만들어 보자
// Board : Arduino Uno 
// 부저의 극성을 잘 맞춰서 해줘야 한다 
//*******************************************************************************

// Define Pins   //데이터 핀 번호
#define BUZZER 7  
#define BUTTON 2

void setup()
{
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() 
{
  if ( digitalRead(BUTTON) ) {// 버튼이 눌리면 소리(비프음)가 난다 
    digitalWrite(BUZZER, HIGH); // BUZZER OFF
  }else{
    digitalWrite(BUZZER, LOW);  // BUZZER ON
  }
  
}
