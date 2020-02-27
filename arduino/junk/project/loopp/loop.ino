void setup() {
  // We need to attach the servo to the used pin number
  BigServo.attach(servoPin1);
  SmallServo.attach(servoPin2);
}
void loop() {
  //       BigServo.write(90);
  //       delay(5000);

  //bigServo
  //   releasee();

  bigservoUp();
  bigservoDown();

  grab();
  bigservoUp();
  bigservoDown();
  releasee();
  //delay(1000);
}
