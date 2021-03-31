#include <Arduino.h>


void setup()
{
	Serial.begin(115200);
	pinMode(0, INPUT); #ตัวรับแสง LDR
	pinMode(2, OUTPUT1); #แสงเลเซอร์
  	pinMode(3, OUTPUT2); #หลอดไฟสีแดง
  	pinMode(4, OUTPUT3); #หลอดไฟสีเขียว
  	pinMode(5, OUTPUT4); #หลอดไฟสีส้ม
	Serial.println("\n\n\n");
}

void loop()
{
  int cnt = 0 ;
  void loop()
    {
      int val = digitalRead(0);
    
      if cnt < 10
        {
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
          digitalWrite(4, HIGH);
          digitalWrite(5, LOW);
        }
      elif cnt == 10
         {
           digitalWrite(2, LOW);
           digitalWrite(3, HIGH);
           digitalWrite(4, LOW);
           digitalWrite(5, LOW);
	   delay(2000);
           break();
          }
      if val == 1
          {
            cnt++;
        
            void loop()
            {
              if val == 0 
              {break();}
             }
            }
    }
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  delay(5000);
    }
}
