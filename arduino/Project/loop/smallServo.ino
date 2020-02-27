
//-------------Small Servo-------------
int clawClose = 100;
int clawOpen = 40;
int x = 40;

void doGrab(){
 for (x = clawOpen; x <= clawClose; x++) {
    SmallServo.write(x);
    Serial.print("podi eka wada");
    delay(5);
  }
  delay(1000);
}

void doRelease(){
  for (x = clawClose; x > clawOpen; x--) {
    SmallServo.write(x);
    delay(5);
  }
  delay(1000);
}
