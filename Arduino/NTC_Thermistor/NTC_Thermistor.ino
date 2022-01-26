//*******************************************************************************
// Project : NTC 서미스터(Thermistor)
// Board : Arduino Uno 
// 서미스터(thermistor)란 저항의 종류로, 온도에 따라 물질의 저항 성질이 변화하는
// 전자 부품입니다. 또는 열가변저항기라고도 합니다. 주요 용도는 가정용으로는
// 일반 온도계, 산업용으로는 회로의 전류가 일정 이상으로 오르는 것을 방지하거나
// 회로의 온도를 감지하는 센서로도 이용할 수 있다
//*******************************************************************************

int AnalogPin = A0;    // Analog input
int DigitalPin = 7;  // Digital input
int LedPin = 13;     // select the pin for the LED
int gValue = 0;     // variable for Sensor Data
void setup ()
{
  pinMode (LedPin, OUTPUT);
//  pinMode (DigitalPin, INPUT);
  Serial.begin (9600);
}
void loop ()
{
  gValue = analogRead(AnalogPin);
  
  if (gValue>180)   {        
    digitalWrite (LedPin, HIGH);
  }else {
    digitalWrite (LedPin, LOW);
  }
  Serial.print ("Sensor Value : ");
  Serial.println (gValue, DEC);
  delay(500);
}
