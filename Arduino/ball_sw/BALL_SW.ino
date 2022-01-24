//*******************************************************************************
// Project : BALL_SW 기울기 센서를 사용한 lde 점등
// Board : Arduino Uno 

//*******************************************************************************

// Define Pins // 핀번호 정의 
#define RED 7
#define BALL_SW 4

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(BALL_SW, INPUT_PULLUP);
}

void loop() 
{
  if ( digitalRead(BALL_SW) ) {
    digitalWrite(RED, LOW);  // LED ON
  }else{
    digitalWrite(RED, HIGH); // LED OFF
  }
  
}
