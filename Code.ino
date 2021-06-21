#include <Servo.h>

int S_signal=3;
Servo allservo;

void setup()
{
  allservo.attach(S_signal);
  allservo.write(90);
  delay(1000);
  allservo.write(0);
  delay(1000);     
  
}

void loop()
{
 
}