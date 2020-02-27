// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 10; 
// Create a servo object
 
Servo Servo1;

  int maxx = 180;
  int minn = 0; 
  int i =minn; 
    
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin);
}
void loop(){ 
//       Servo1.write(90);
//       delay(5000); 

   for(i=minn;i<=maxx;i++){
   Servo1.write(i);
   delay(10);
   }
   
   delay(1000); 

   for(i=maxx;i>minn;i--){
   Servo1.write(i);
   delay(10);
   }
   
   delay(1000);
}
