#include<Servo.h>

int smallServoPin = 10;

int clawClose = 100;
int clawOpen = 40;

int i=40;

Servo SmallServo;

void setup(){
    SmallServo.attach(smallServoPin);
}

void doGrab(){
 for (i = clawOpen; i <= clawClose; i++) {
    SmallServo.write(i);
    delay(5);
  }
  delay(1000);
}

void doRelease(){
  for (i = clawClose; i > clawOpen; i--) {
    SmallServo.write(i);
    delay(5);
  }
  delay(1000);
}

void loop(){
  doGrab();
  delay(1000);
  doRelease();
  delay(1000);
}
