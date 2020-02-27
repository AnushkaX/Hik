



long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
int sense() {
  long duration, inches, cm;
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  cm = microsecondsToCentimeters(duration);
  doGrab(cm);
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
}

void doGrab(int dist) {
  if (dist < 10) {
    bigservoDown();
    delay(100);
    grab();
    delay(100);
    bigservoUp();
    
    flag = true;
  }
}

void drop() {
  if (flag == true) {
    bigservoDown();
    delay(100);
    releasee();
    delay(100);
    bigservoUp();
    flag = false;
  }
}
