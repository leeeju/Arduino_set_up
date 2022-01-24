//*******************************************************************************
// Project : Piezo in music (떳다 떳다 비행기)
// 피에조 (piezo)는 일반적으로 압전 소자 (piezoelectric element)를 뜻하며, 압력을 가함으로써 전압을 발생 (압전 효과)시키거나, 
// 전압을 가함으로써 변형을 (역압전 효과)일으키는 디바이스입니다
// Board : Arduino Uno 
// 도 레 미 파 솔 라 시 도의 주파수는 도(523Hz), 레(587Hz), 미(659 Hz), 
// 파(698 Hz), 솔(784), 라(880 Hz), 시(988 Hz), 도(1047 Hz) 입니다.
//*******************************************************************************

// Define Pins
#define BUZZER 7
#define BUTTON 4

#define NOTE_C5  523   // 도
#define NOTE_CS5 554
#define NOTE_D5  587   // 레
#define NOTE_DS5 622
#define NOTE_E5  659   // 미
#define NOTE_F5  698   // 파 
#define NOTE_FS5 740 
#define NOTE_G5  784   //솔
#define NOTE_GS5 831
#define NOTE_A5  880   //라
#define NOTE_AS5 932
#define NOTE_B5  988   // 시
#define NOTE_C6  1047  //도 

int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_G5, NOTE_G5, NOTE_E5,
  NOTE_C5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_E5, 
  NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,};

// <떳다 떳다 비행기> 
// 미레도레 미미미
// 레레레 미솔솔
// 미레도레 미미미
// 레레 미레도

int duration = 800;  // 500 miliseconds
 
void setup() {
}
 
void loop() {  
  // 떳다떳다 비행기
  for (int thisNote = 0; thisNote < 25; thisNote++) {
    tone(BUZZER, melody[thisNote], duration);
    delay(1000); // 1초마다 계이름이 바뀜
  }   
  delay(1000);
}
