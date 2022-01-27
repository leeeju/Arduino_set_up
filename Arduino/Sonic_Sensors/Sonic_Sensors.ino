//*******************************************************************************
// Project : Arduino Uno Ultra Sonic 초음파 센서
// Board : Arduino Uno 

//*******************************************************************************

int echo = 7; // 출력  echo = 메아리 == 초음파
int trig = 6; // 입력

void setup() {
  Serial.begin(115200);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  float Length, distance;

  digitalWrite(trig, HIGH);
  delay(10); // 데이터 시트에 나오는 시작 Trigger 신호를 10ms 간격을 이곳에 작성 하세요
  digitalWrite(trig, LOW);
  
  Length = pulseIn(echo, HIGH); 
  distance = ((float)(340 * Length) / 10000) / 2;  
  
  Serial.print(distance);
  Serial.println(" Cm");
  delay(1000);
}
