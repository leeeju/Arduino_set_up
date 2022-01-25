//*******************************************************************************
// Project : sound module 소리감지 센서
// Board : Arduino Uno 
//*******************************************************************************

int sensorPin = A0; // Sensor ouput 아날로그 pin
int ledPin = 13;     // for the LED led pin
int sensorValue = 0; // Sensor Data 데이터 pin
 
void setup () 
{
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);  // 통신속도
}
 
void loop () 
{
  sensorValue = analogRead (sensorPin); // 센서를 읽어옴

  if(sensorValue>10)
    digitalWrite (ledPin, HIGH);
  else
    digitalWrite (ledPin, LOW);
  
  Serial.print ("Sensor Value : ");
  Serial.println (sensorValue, DEC);
}
