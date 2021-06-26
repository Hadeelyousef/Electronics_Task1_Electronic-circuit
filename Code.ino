#include <Servo.h>

int signal1=3;
int signal2=5;
int signal3=6;
int signal4=9;
int signal5=10;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup()
{
  //Servo1
  servo1.attach(signal1);
  servo1.write(90);
  
  //Servo2
  servo2.attach(signal2);
  servo2.write(90);
  
  //Servo3
  servo3.attach(signal3);
  servo3.write(90);
  
  //Servo4
  servo4.attach(signal4);
  servo4.write(90);
  
  //Servo5
  servo5.attach(signal5);
  servo5.write(90);
  
  
  delay(1000);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  
  
}

void loop()
{
 
}