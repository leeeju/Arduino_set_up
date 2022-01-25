//*******************************************************************************
// Project : Sensor joystick 센서
// Board : Arduino Uno 
//*******************************************************************************

int JoyStick_X = A0; // x-axis x축 아날로그 pin A0번
int JoyStick_Y = A1; // y-axis y축 아날로그 pin A1번
int JoyStick_Z = 7;  // key-axis   데이터 pin 7번

void setup ()
{
  Serial.begin (9600); // 통신속도 speed 9600
  pinMode (JoyStick_X, INPUT);  // 핀에 신호(값이) 들어 오면
  pinMode (JoyStick_Y, INPUT);
  pinMode (JoyStick_Z, INPUT_PULLUP);
}
void loop ()
{
  int x, y, z;
  x = analogRead (JoyStick_X);  // 값을 읽어옴
  y = analogRead (JoyStick_Y);
  z = digitalRead (JoyStick_Z);
  
  Serial.print ("X : "); // 출력
  Serial.print (x, DEC);
  Serial.print (",");
  Serial.print ("Y : ");
  Serial.print (y, DEC);
  Serial.print (",");
  Serial.print ("Button : ");
  Serial.println (z, DEC);
  delay (100); // 입력값을 100ms[밀리세컨드] (0.1초) 마다 인식함
}
