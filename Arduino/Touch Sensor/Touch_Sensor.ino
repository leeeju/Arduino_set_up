//*******************************************************************************
// Project : TTP223B Touch Sensor 터치패드 센서를 사용한 led on // led 3개로 컴버젼
// Board : Arduino Uno 

//*******************************************************************************

// When Sig Output is high, touch sensor is being pressed
 
int touchPin = 2; // pin for the touch sensor
int ledPin = 13; // pin for the LED
int ledPin2 = 12; // 데이터 핀 정의
int ledPin3 = 11;
 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // set the Led Pin to output
  pinMode(ledPin2, OUTPUT);  // set the Led Pin to output
  pinMode(ledPin3, OUTPUT);  // 초기화
  pinMode(touchPin, INPUT); // 
}
 
void loop() {
  int touchValue = digitalRead(touchPin); // read the Touch Pin 터치센서를 인식 하면
  
  if (touchValue == HIGH) { //check if the sensor is touched 터치센서에 HIGH 값이 뜨면
    
    digitalWrite(ledPin, HIGH); // led on
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    
    Serial.println("터치 센서 인식");
  }
  else { // 인식값이 없으면 
    
    digitalWrite(ledPin, LOW);  //led off
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    
    Serial.println("인식값이 없습니다");
  }
  
  delay(1000);
 
}
