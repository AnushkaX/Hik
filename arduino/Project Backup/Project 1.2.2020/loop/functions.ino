void Grab() {
  bigservoDown();
  delay(100);
  doGrab();
  delay(100);
  bigservoUp();

  flag = true;
}

void Drop() {
  if (flag == true) {
    bigservoDown();
    delay(100);
    doRelease();
    delay(100);
    bigservoUp();
    flag = false;
  }
}
