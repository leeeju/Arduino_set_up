//*******************************************************************************
// Project : LM35  sensor 
// Board : Arduino Uno 
// 주의 잘못 꼽으면 소자의 온도가 100도 가까이 올라감 gnd , V+ 잘보고 꼽으세요,,,  손가락 데임...
//*******************************************************************************

int analogPin = 0; // Analog pin
int val = 0; // variable(변수)
float temp =0; 

void setup()
{
  Serial.begin(9600);        // setup serial (통신속도)
  analogReference(INTERNAL); // Internal voltage reference(내부 전압 기준)
}
//내부 전압이 필요 이유 : 측정할 수 있는 온도범위는 -55에서 150도까지이며 0.5도의 정확성을 보증하면서 1도당 10mV 전압 변동을 가진다
void loop()
{
  val=0;
  for(int i=0 ; i <10 ; i++){
    val = val + analogRead(analogPin); // Read ADC DC 전압을 읽어옴
    delay(10);
  }
  val =val / 10;
  val = map(val,0,1023,0,1100);
  temp=(float)val/10;

  Serial.println(temp,1); // Output
  delay(500);
}
