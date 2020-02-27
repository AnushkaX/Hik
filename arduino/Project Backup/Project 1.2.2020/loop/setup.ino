#include <Servo.h>

//-------color sensor----------
#define Color_S0 3
#define Color_S1 4
#define Color_S2 5
#define Color_S3 6
#define Color_sensorOut 2
int frequency = 0;
//-------------------------------


//--------Servo-----------
Servo BigServo;
Servo SmallServo;
#define smallServoPin 5
#define bigServoPin 10
//------------------------


//-----------Sonar-----------
#define pingPin 4
#define echoPin 3
//----------------------

boolean flag = false;


void setup() {

  //-------------Servo setup-------------------
  BigServo.attach(bigServoPin);
  SmallServo.attach(smallServoPin);
  //-------------------------------------------


  //------------Sonar setup--------------------------
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //-------------------------------------------


  //------------Color sense setup---------------
  pinMode(Color_S0, OUTPUT);
  pinMode(Color_S1, OUTPUT);
  pinMode(Color_S2, OUTPUT);
  pinMode(Color_S3, OUTPUT);
  pinMode(Color_sensorOut, INPUT);

      // Setting frequency-scaling to 20%
  digitalWrite(Color_S0, HIGH);
  digitalWrite(Color_S1, LOW);
  //----------------------------------------------

}
