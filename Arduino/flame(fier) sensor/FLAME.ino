//*******************************************************************************
// Project : flame sensor 불꽃감지 센서
// Board : Arduino Uno 
// 불꽃이 가까이 있어야 식별이 가능함, 멀리서는 안됨
//*******************************************************************************

#define SensorIn A0 //아날로그 핀

void setup()
{
    Serial.begin(9600); // 통신속도
}

void loop()
{
    int R = analogRead(SensorIn); //Read Sensor값
    Serial.print("Flame sensor value : ");
    Serial.println(R);    //시리얼 모니터에 출력
    delay(1000);
}
