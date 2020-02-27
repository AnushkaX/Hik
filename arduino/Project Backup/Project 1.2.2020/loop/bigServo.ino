//---------Big Servo-------------
int down = 180;
int up = 0;
int y=0;

void bigservoDown() {
  for (y = up; y <= down; y++) {
    BigServo.write(y);
    delay(5);
  }
  delay(1000);
}

void bigservoUp() {
  for (y = down; y > up; y--) {
    BigServo.write(y);
    delay(5);
  }
  delay(1000);
}
