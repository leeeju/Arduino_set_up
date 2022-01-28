int distance = 0; // 거리값을 저장할 변수
 
void setup(){
  Serial.begin(9600); //  9600bps
}
void loop(){
 
  int volt = map(analogRead(A0), 0, 1023, 0, 5000); // 0~1023 사이 값을 갖는 아날로그 신호값을
                                                    //  0~5000 (5V) 사이 값으로 변환  
  if(volt > 67.5)                                                   
  {
    distance = ((48375 / (volt - 67.5)  )/ 10); // 읽어들인 Voltage 값을 거리값(단위: cm)로 변환하는 공식
    Serial.print(distance);  //거리값을 시리얼모니터로 출력해줍니다.
    Serial.print(" cm");
    Serial.println(" ");
  }
  else
    Serial.println("Input Error");
  
  delay(1000);
}
