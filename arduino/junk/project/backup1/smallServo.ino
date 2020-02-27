
//-------------Small Servo-------------
int hold = 100;
int rls = 40;

void grab(){
 for (i = rls; i <= hold; i++) {
    SmallServo.write(i);
    delay(5);
  }
  delay(1000);
}

void releasee(){
  for (i = hold; i > rls; i--) {
    SmallServo.write(i);
    delay(5);
  }
  delay(1000);
}
