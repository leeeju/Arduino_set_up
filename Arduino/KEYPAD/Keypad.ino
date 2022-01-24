//*******************************************************************************
// Project : KEYPAD를 사용한 시리널 모니터 사용
// Board : Arduino Uno 
//*******************************************************************************

#define Rows  4
#define Cols  4

char keys[Rows][Cols] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
 
const int RowPinTbl[Rows] = {5, 4, 3, 2};
const int ColPinTbl[Cols] = {6, 7, 8, 9};
 
void setup() {
    Serial.begin(9600);    // init Serial 
    
    for(int i=0; i<Rows; i++) {
        pinMode(RowPinTbl[i], INPUT_PULLUP);
    }
    
    for(int j=0; j<Cols; j++) {
        pinMode(ColPinTbl[j], OUTPUT);
        digitalWrite(ColPinTbl[j], HIGH);    // 초기값 HIGH
    }
}

void loop() {
    // 버튼 인식 
    for(int j=0; j<Cols; j++) {
        digitalWrite(ColPinTbl[j], LOW);    // Col 라인 Active Low
        for(int i=0; i<Rows; i++) {
            if( digitalRead(RowPinTbl[i]) == LOW ) {    // check Row 라인
                Serial.print("row=");
                Serial.print(i);
                Serial.print(", column=");
                Serial.println(j);
                Serial.print(", Key Number=");
                Serial.println(keys[i][j]);
                
            }
        }
        digitalWrite(ColPinTbl[j], HIGH);    // Col 라인 다시 High
    }
}
