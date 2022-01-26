//*******************************************************************************
// Project : FND 7 segement 숫자 카운터 
// Board : Arduino Uno 
//*******************************************************************************

// 세그먼트 테이브 
// DIG  HEX   a   b   c   d   e   f   g
//  0   0×7E  on  on  on  on  on  on  off
//  1   0×30 off  on  on  off off off off
//  2   0×6D  on  on  off on  on  off on
//  3   0×79  on  on  on  on  off off on
//  4   0×33 off  on  on  off off on  on
//  5   0×5B  on  off on  on  off on  on
//  6   0×5F  on  off on  on  on  on  on
//  7   0×70  on  on  on  off off off off
//  8   0×7F  on  on  on  on  on  on  on
//  9   0×7B  on  on  on  on  off on  on
//  A   0×77  on  on  on  off on  on  on
//  B   0×1F off  off on  on  on  on  on
//  C   0×4E  on  off off on  on  on  off
//  D   0×3D off  on  on  on  on  off on
//  E   0×4F  on  off off on  on  on  on
//  F   0×47 on   off off off on  on  on

//#define ANODE_TYPE

int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0     세그먼트 테이블을 보고 숫자 배열을 만든다 
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }};   // 9

//display fnd
void Num_Write(int);

void setup() 
{ 
  // set pin modes
  pinMode(2, OUTPUT);    //a  데이터 pin 번호
  pinMode(3, OUTPUT);    //b
  pinMode(4, OUTPUT);    //c
  pinMode(5, OUTPUT);    //d
  pinMode(6, OUTPUT);    //e
  pinMode(7, OUTPUT);    //f
  pinMode(8, OUTPUT);    //b
  
  for (int j=2; j <= 8; j++) {   // 숫자를 반복한다 
   digitalWrite(j, HIGH);
  }
}

void loop() 
{
  for (int counter = 10; counter > 0; --counter)  
  {
   delay(1000); // 1초 마다 숫자를 카운터 한다 
   Num_Write(counter-1); 
  }
  delay(50); // 출력되는 숫자속도를 조절한다 
}

void Num_Write(int number) 
{
  int pin= 2;
  for (int j=0; j < 7; j++){
#ifdef ANODE_TYPE
   digitalWrite(pin, !num_array[number][j]);
#else
   digitalWrite(pin, num_array[number][j]);
#endif
   pin++;
  }
}
