const int pingPin = D1; // Trigger Pin of Ultrasonic Sensor
const int echoPin = D0; // Echo Pin of Ultrasonic Sensor

void setup() {
  Serial.begin(115200); // Starting Serial Terminal
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(D3,OUTPUT);
}

void loop() {
  long duration, inches, cm;

  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  Serial.print(inches);
//  pinMode(LED_BUILTIN,HIGH);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  Serial.println();
  
  delay(100);
  if(cm <10){
    digitalWrite(D3,HIGH);
  }
  else
  {
    digitalWrite(D3,LOW);
    }
//    pinMode(LED_BUILTIN,LOW);
  delay(100);
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
