char inputData;
char ahrsData;  
String ahrsString = "";         
boolean stringCheck = false;

    void setup(){
       
        Serial.begin(115200); //아두이노 통신개방

        //Serial1.begin(115200); //아두이노와 Ahrs 통신, 하드웨어 제작 시 RX,TX를 19,18핀의 연결하여 Serial1을 사용.
    }

    void loop(){ 

        if (stringCheck) {  //stringCheck가 true 값이면 실행.

            Serial.println(ahrsString); //ahrsString 값 화면으로 출력.

            ahrsString = ""; //ahrsString 초기화 

            stringCheck = false; //stringCheck를 false 값으로 저장.  
            delay(500) ;
        }
    }

    void serialEvent(){      
      
        while(Serial.available()){    //Serial 입력이 있으면 실행.
          
        inputData =(char)Serial.read(); //inputData를 입력 값으로 저장.
        
        Serial.write(inputData);   //저장 값을 센서로 전송.
        
        }
    }

    void serialEvent1(){
    
        while(Serial.available()) { //센서의 전송 값이 있으면 실행.
          
            ahrsData = (char)Serial.read(); //ahrsData를 전송 값의 맞는 센서 값으로 저장.
            
            ahrsString += ahrsData;
            
            if (ahrsData == '\n') {  //ahrsData에 Null 값이 있으면 실행.
              
                stringCheck = true;  //stringCheck를 true 값으로 저장.
          
            }
        }   
   }
