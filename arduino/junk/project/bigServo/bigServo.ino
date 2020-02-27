int servoPin2 = 5;

int max1 = 180;
int min1 = 0;

Servo BigServo;

void bigservoDown() {
  for (i = min1; i <= max1; i++) {
    BigServo.write(i);
    delay(5);
  }
  delay(1000);
}

void bigservoUp() {
  for (i = max1; i > min1; i--) {
    BigServo.write(i);
    delay(5);
  }
  delay(1000);
}
