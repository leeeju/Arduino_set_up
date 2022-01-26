//*******************************************************************************
// Project : potentiometer 가변저항 값 시리얼 모니터로 보기 
// Board : Arduino Uno 
//*******************************************************************************
 #define SensorIn A0
#define LedPin 13

void setup(){
    Serial.begin(9600);
}

void loop(){
  
    int R = analogRead(SensorIn); //Read Sensor값

    Serial.print("potentiometer  value : ");
    Serial.println(R);    //시리얼 모니터에 출력
    delay(1000);
}
