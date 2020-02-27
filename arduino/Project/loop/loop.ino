#include <Servo.h>

//-------color sensor----------
#define Color_S0 3
#define Color_S1 4
#define Color_S2 5
#define Color_S3 6
#define Color_sensorOut 2
int frequency = 0;
//-------------------------------

//-------Motor Controller--------
const int PWM1 = 9 ;  //initializing pin 2 as pwm
const int IN_A1 = 12 ;
const int IN_A2 = 13 ;
const int PWM2 = 11 ;  //initializing pin 2 as pwm
const int IN_B1 = 6 ;
const int IN_B2 = 7 ;

//--------Servo-----------
Servo BigServo;
Servo SmallServo;
#define smallServoPin 2
#define bigServoPin 8
//------------------------


//-----------Sonar-----------
#define pingPin 4
#define echoPin 3
//----------------------

boolean flag = false;


void setup() {

  Serial.begin(9600);

  //-------------Servo setup-------------------
  BigServo.attach(bigServoPin);
  SmallServo.attach(smallServoPin);
  //-------------------------------------------


  //------------Sonar setup--------------------------
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //-------------------------------------------

  //-------Motor Controller----------------
  pinMode(PWM1, OUTPUT) ;  //we have to set PWM pin as output
  pinMode(PWM2, OUTPUT) ;  //we have to set PWM pin as output
  pinMode(IN_A1, OUTPUT) ; //Logic pins are also set as output
  pinMode(IN_A2, OUTPUT) ;
  pinMode(IN_B1, OUTPUT) ; //Logic pins are also set as output
  pinMode(IN_B2, OUTPUT) ;

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

  sense();
}

int i = 1;

void loop() {
  
  if (i == 1)
  {
    int flag = 0;
    if (flag == 0) {
      forward();
    }
    if (sense() < 5)
    {
      stopp();
      Grab();
      flag = 1;
    }

  }

    if (flag == 1) {
      delay(1000);
      backward();
      delay(1000);
      stopp();
      Drop();
    }
  
  i = 0;
}
