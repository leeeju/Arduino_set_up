//*******************************************************************************
// Project : Water Sensor 물인식 센서
// Board : Arduino Uno 
// 물을 인식한다기 보다는 넓은 인식판에 빗살무의 센서가 서로 접점이 생기면서 도체간의 미세 전류가 흘러 그 값을 인식하는거임 
//*******************************************************************************
#define SensorIn A2 // 아날로그 pin 0 번 [설정된 아날로그 pin이 아닌 다른곳에 꼽을 경우 오류값이 출력됨]

void setup(){
    Serial.begin(9600); // 통신 속도
}

void loop(){
    int R = analogRead(SensorIn); //센서값을 읽어와서 R로 집어 넣음
    Serial.print("Water sensor value : ");
    Serial.println(R);    //output R 값을 출력함
    delay(1000);          // 센서를 읽어오는 속도 
}
