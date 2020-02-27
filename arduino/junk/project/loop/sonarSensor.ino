
long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
long sense() {
  long duration, cm;
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  //  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  Serial.print(cm);
  Serial.println("cm");
  delay(100);
     // pinMode(LED_BUILTIN,LOW);
//  delay(100);
return cm;
}

void doGrab() {
 
    bigservoDown();
    delay(100);
    grab();
    delay(100);
    bigservoUp();

    flag = true;
  
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
