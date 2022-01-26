//*******************************************************************************
// Project : 조도센서 출력값 확인 하기 
// Board : Arduino Uno 
//*******************************************************************************
#define  SensorIn A0 // 아날로그 핀 번호

void setup(){
    Serial.begin(9600);
}

void loop(){
    int R = analogRead(SensorIn); //Read Sensor 센서 값

    Serial.print("CDS  value : ");
    Serial.println(R);    //시리얼 모니터에 출력
    delay(1000);  // 1초에 한번
}
