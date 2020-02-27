int red=0;
int green=0;
int blue=0;

#define redMin 10
#define greenMin 10
#define blueMin 10

int getColor() {
  // Setting red filtered photodiodes to be read
  digitalWrite(Color_S2,LOW);
  digitalWrite(Color_S3,LOW);
  frequency = pulseIn(Color_sensorOut, LOW);
  red=frequency;
  delay(100);
  
  // Setting Green filtered photodiodes to be read
  digitalWrite(Color_S2,HIGH);
  digitalWrite(Color_S3,HIGH);
  frequency = pulseIn(Color_sensorOut, LOW);
  green=frequency;
  delay(100);
  
  // Setting Blue filtered photodiodes to be read
  digitalWrite(Color_S2,LOW);
  digitalWrite(Color_S3,HIGH);
  frequency = pulseIn(Color_sensorOut, LOW);
  blue=frequency;
  delay(100);

  if(red<redMin){
    return 1;
  } else if(green < greenMin){
    return 2;
  } else if(blue < blueMin){
    return 3;
  }
}
