//---------Big Servo-------------
int down = 180;
int up = 0;

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
