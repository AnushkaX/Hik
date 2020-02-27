// Include the Servo library
#include <Servo.h>
// Declare the Servo pin
int servoPin1 = 9;
//int servoPin2 = 5;
// Create a servo object

Servo BigServo;
//Servo SmallServo;

int maxx = 85;
int minn = 40;
int max1 = 0;
int min1 = 90;
int i = minn;

void bigservoDown() {
  for (i = min1; i <= max1; i++) {
    BigServo.write(i);
    delay(100);
  }
  //delay(1000);
}

void bigservoUp() {
  for (i = max1; i > min1; i--) {
    BigServo.write(i);
    delay(100);
  }

  //delay(1000);
}
//
//void grab()
//{
//  for (i = minn; i <= maxx; i++) {
//    SmallServo.write(i);
//    delay(2);
//  }
//
//  delay(1000);
//}

//void releasee()
//{
//  for (i = maxx; i > minn; i--) {
//    SmallServo.write(i);
//    delay(2);
//  }
//
//  delay(1000);
//}



void setup() {
  // We need to attach the servo to the used pin number
  BigServo.attach(servoPin1);
//  SmallServo.attach(servoPin2);
}
void loop() {
  //       BigServo.write(90);
  //       delay(5000);

  //bigServo
  //   releasee();

  BigServo.write(0);
  delay(5000);

  for(i = 0 ; i < 70 ; i++)
  {
    BigServo.write(i);
    delay(50);
    }
  //bigservoUp();
  //delay(1000);
  //bigservoDown();


  //delay(1000);


}
