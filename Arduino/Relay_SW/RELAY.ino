//*******************************************************************************
// Project : RELAY for led / 릴레이 전원을 사용한 led on/off
// Board : Arduino Uno 
//*******************************************************************************

#define RELAY 7 //데이터 핀 번호

void setup() 
{ 
  // set pin modes
  pinMode(RELAY, OUTPUT);    //핀모드
}

void loop() 
{
  digitalWrite(RELAY,HIGH); // led on
  delay(100);
  digitalWrite(RELAY,LOW);  // led off
  delay(100);
  
  

}
