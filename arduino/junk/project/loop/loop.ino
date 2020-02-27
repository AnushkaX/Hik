#include <Servo.h>

//---------Color sensor-------------
#define S0 6
#define S1 7
#define S2 8
#define S3 9
#define sensorOut 2
//-----------------------------------

//-----------Servo pins--------------
#define smallS 5
#define bigS 10
//-----------------------------------

//----------Ultra sonic--------------
#define pingPin 4 // Trigger Pin of Ultrasonic Sensor
#define echoPin 3 // Echo Pin of Ultrasonic Sensor
//------------------------------------

int frequency = 0;

Servo BigServo;
Servo SmallServo;

boolean flag = false;

int i = 0;

void setup() {
  Serial.begin(9600);

  //-------------servo------------------
  BigServo.attach(bigS);
  SmallServo.attach(smallS);
  //------------------------------------

  //------------sonar-------------------
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //------------------------------------

  //------color sensor-----------------
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);

  // Setting frequency-scaling to 20%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  //-----------------------------------




  bigservoUp();
  releasee();

}



void loop() {

  if (sense() < 6) {
    doGrab();
    color();
    delay(1000);
    drop();
  }


}
