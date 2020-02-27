#include <Servo.h>

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

int frequency = 0;


Servo BigServo;
Servo SmallServo;
int smallS = 5;
int bigS = 10;

const int pingPin = 4; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 3; // Echo Pin of Ultrasonic Sensor

boolean flag =false;

int i = 40;

void setup() {
  //servo
  BigServo.attach(bigS);
  SmallServo.attach(smallS);

//sonar
pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);


//color sense
pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);




  
   releasee();

}



void loop() {
  sense();
//  flag= false;
  drop();
  Serial.print(flag);
// int dist = sense();
//  Serial.print(dist);
// if(cm < 10){
//  grab();
//
//  delay(2000);
// }
//
// releasee();
//  bigservoUp();
//  bigservoDown();
//  grab();
//  bigservoUp();
//  bigservoDown();
//  releasee();
}
