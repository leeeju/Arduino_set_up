#include <SoftwareSerial.h>

void setup()
{
 Serial.begin(115200); 
}

void loop()
{
  
  if(Serial.available())
  {
    char read_data = Serial.read();
    Serial.write(read_data);
    delay(2000);
  }
 
}
