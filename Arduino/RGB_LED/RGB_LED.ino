//*******************************************************************************
// Project : RGB_LED Blink in Sensor Kit
// RGB_LED를 사용한 센서 켜기
// Board : Arduino Uno
//
// PWM은 Pulse Width Modulation의 약자로서, Pulse 폭을 조정해서 출력되는 디
// 지털 신호입니다. 전압이 균일한 교류 신호(구형파)를 생각해보면 Frequency와
// Duty라는 두 개의 파라미터가 있습니다. Frequency는 1초 동안 발진되는 파형
// 개수이고, Duty는 1개의 주기에서 On 되는 시간을 비율을 계산된 수치입니다
//*******************************************************************************

// Define Pins
#define BLUE 3 // BLUE , BLUE
#define GREEN 5 //White
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT); // 핀모드 
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

// main loop
void loop()
{
  int redValue;
  int greenValue;
  int blueValue;

  redValue = 100; // 밝기조절
  greenValue = 0;
  blueValue = 0;

  for (int i = 0; i < 255; i += 1)
  {
    redValue -= 1;
    greenValue += 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(10); //pwm 조절을 위한 delay값 초단위로 움직인다 ex) 1 = 1초
  }

  redValue = 0;
  greenValue = 100;
  blueValue = 0;

  // Green, blue fade 반복문을 사용해서 다름 led 값을 불러옴
  for (int i = 0; i < 255; i += 1) {

    greenValue -= 1;
    blueValue += 1;
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(10);
  }

  redValue = 0;
  greenValue = 0;
  blueValue = 100;

  for (int i = 0; i < 255; i += 1) {
    blueValue -= 1;
    redValue += 1;
    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(10);
  }
}
