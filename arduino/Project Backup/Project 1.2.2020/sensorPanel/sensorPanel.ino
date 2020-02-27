
void setup()
{
 Serial.begin(9600);
 //motor1.setSpeed(200);
 //motor2.setSpeed(200);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(4,INPUT);
 pinMode(5,INPUT);
 pinMode(6,INPUT);
 pinMode(7,INPUT);
 pinMode(8,INPUT);
// motor1.run(RELEASE);
// motor2.run(RELEASE);
}
void loop()
{
 int S0 = digitalRead(10);
 int S1 = digitalRead(11);
 int S2 = digitalRead(2);
 int S3 = digitalRead(3);
 int S4 = digitalRead(4);
 int S5 = digitalRead(5);
 int S6 = digitalRead(6);
 int S7 = digitalRead(7);
 int S8 = digitalRead(8);

 Serial.print(S0);
 Serial.print(S1);
 Serial.print(S2);
 Serial.print(S3);
 Serial.print(S4);
 Serial.print(S5);
 Serial.print(S6);
 Serial.print(S7);
 Serial.print(S8);
 

 Serial.print("\n");

}
