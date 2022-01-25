//*******************************************************************************
// Project : DHT11 습,온도 센서 운영하기 
// Board : Arduino Uno
//*******************************************************************************
int DHT11pin = 7;

unsigned char dat[5];
unsigned char read_DHT11 () {
unsigned char data;

for (int i = 0; i < 8; i ++) {
   if (digitalRead (DHT11pin) == LOW) {
     while (digitalRead (DHT11pin) == LOW); // wait for 50us
      
      delayMicroseconds (30); // determine the duration of the high level to determine the data is '0 'or '1'
      
      if (digitalRead (DHT11pin) == HIGH)
        data |= (1 << (7-i)); // high front and low in the post
      while (digitalRead (DHT11pin) == HIGH); // data '1 ', wait for the next one receiver
      }
    }
return data;
}
void start_read () {
  digitalWrite (DHT11pin, LOW); // 데이터 수신 signal 시작
  delay (20);
  
  digitalWrite (DHT11pin, HIGH);
  delayMicroseconds (40); // DHT11센서의 반응
  
  pinMode (DHT11pin, INPUT);
  while (digitalRead (DHT11pin) == HIGH);
  delayMicroseconds (80);
  if (digitalRead (DHT11pin) == LOW);
  delayMicroseconds (80);
  for (int i = 0; i < 4; i ++) // 습/온도 세선서의 data를 수신한다 
    dat[i] = read_DHT11 ();
  pinMode (DHT11pin, OUTPUT);
  digitalWrite (DHT11pin, HIGH); // Stop signal
}

void setup () {
  Serial.begin (9600);
  pinMode (DHT11pin, OUTPUT);
}

void loop () {
  Serial.print ("start read!");
  start_read ();
  Serial.print ("humdity :");
  Serial.print (dat [0], DEC); // display humidity-bit;
  Serial.print ('.');
  Serial.print (dat [1], DEC); // display humidity decimal ;
  Serial.print ("%, ");
  Serial.print ("temperature :");
  Serial.print (dat [2], DEC); // display temperature-bits;
  Serial.print ('.');
  Serial.print (dat [3], DEC); // display temperature decimal ;
  Serial.println ('C');
  delay (2000);
}
