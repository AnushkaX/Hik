
//-------------GRABBER-------------

int servoPin1 = 3;

int maxx = 85;
int minn = 40;

Servo SmallServo;

int i = minn;

void grab(){
 for (i = minn; i <= maxx; i++) {
    SmallServo.write(i);
    delay(2);
  }
  delay(1000);
}

void releasee(){
  for (i = maxx; i > minn; i--) {
    SmallServo.write(i);
    delay(2);
  }
  delay(1000);
}
