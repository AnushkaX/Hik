#include<Servo.h>

int bigServoPin = 5;

int down = 180;
int up = 0;

int i=180;
Servo BigServo;

void setup(){
    BigServo.attach(bigServoPin);
}


void bigservoDown() {
  for (i = up; i <= down; i++) {
    BigServo.write(i);
    delay(5);
  }
  delay(1000);
}

void bigservoUp() {
  for (i = down; i > up; i--) {
    BigServo.write(i);
    delay(5);
  }
  delay(1000);
}


void loop(){
  bigservoDown();
  bigservoUp();
}
