//*******************************************************************************
// Project : BUTTON  Blink in Sensor Kit, 버튼으로 led 조작하기 
// Board : Arduino Uno 
// led의 +, - 극성을 잘 맞춰서 꼽아 주세요.
//*******************************************************************************

// Define Pins
#define RED 7
#define BUTTON 4

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() 
{
  if ( digitalRead(BUTTON) ) {
    digitalWrite(RED, HIGH); // LED OFF
  }else{
    digitalWrite(RED, LOW);  // LED ON
  }
  
}
