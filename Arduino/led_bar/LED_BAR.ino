//*******************************************************************************
// Project : LED bar 셋팅 하기
// Board : Arduino Uno 
//*******************************************************************************
int AnalogPin = A0;    // Analog input
int DigitalPin = 7;    // Digital input
int LedPin2 = 2;       // select the pin for the LED
int LedPin3 = 3;       // select the pin for the LED
int LedPin4 = 4;       // select the pin for the LED
int LedPin5 = 5;       // select the pin for the LED
int LedPin6 = 6;       // select the pin for the LED
int LedPin7 = 7;       // select the pin for the LED
int LedPin8 = 8;       // select the pin for the LED
int LedPin9 = 9;       // select the pin for the LED
int LedPin10 = 10;     // select the pin for the LED
int LedPin11 = 11;     // select the pin for the LED
int gValue = 0;        // variable for Sensor Data
void setup ()
{
  int i=0;
  for(i=0 ; i<10 ; i++)
    pinMode (LedPin2+i, OUTPUT);
  Serial.begin (9600);
}
void loop ()
{
  int i=0; 
  static int j=2;
  // clear all led
  for(i=0;i<10;i++)
    digitalWrite (LedPin2+i, HIGH);
  // turn on, shift led
  digitalWrite (j, LOW);
  j++;
  if(j>11)  j=0;
  delay(50);
}
