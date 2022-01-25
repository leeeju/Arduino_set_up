//*******************************************************************************
// Project : RTC(Real Time Clock) 
// Board : Arduino Uno 
// 날짜, 시간 출력하기 
//*******************************************************************************
#include <DS1302.h>  

DS1302 rtc(5, 6, 7);  // DS1302 init(Reset, Data, Clock)

void setup() { 
  Serial.begin(9600);
  rtc.halt(false);               //Set Run-Mode
  rtc.writeProtect(false);       //disable write protect
  
  rtc.setDOW (TUESDAY);        // 일요일
  rtc.setTime(13, 0, 0);       // 08시 00분 00초
  rtc.setDate(25, 01, 2022);     // 2017년 4월 5일
}

void loop() {                                      
  Serial.print("DATE : ");
  Serial.print(rtc.getDateStr());   // Output Date
  Serial.print("Time : ");
  Serial.println(rtc.getTimeStr());  // Output Time
  delay (1000);  
}
