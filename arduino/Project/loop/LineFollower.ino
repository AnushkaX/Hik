//int a[5] = {0, 0, 0, 0, 0};
//int last_proportional = 0;
//int integral = 0;
//
////function prototype of different functions
//
////char select_turn(unsigned char found_left, unsigned char found_right, unsigned char found_st);
//
//int mod(int v);
//
//int set_motors(int a, int b);
//
//void turn(char dir);
//
//void PID();
//
//int right = 0;
//
//int left = 0;
//
////setup function to define the pin Mode is input or output
//
////infinite loop function
//
////void loop() 
////
////{
//
//    // calling the pid function
//
//  
//
//  
//
//int set_motors(int l, int r)
//
//{
//
//  Serial.println(r);
//
//  Serial.println(l);
//
//  if(l>=0 && r>=0)
//
//  {
//
//    analogWrite(en1,mod(l));
//
//    analogWrite(en2, mod(r));
//
//    digitalWrite(L1, HIGH);
//
//    digitalWrite(L2, LOW);
//
//    digitalWrite(r1, HIGH);
//
//    digitalWrite(r2, LOW);
//
//  }
//
// else if(l<=0 && r>=0)
//
//  {
//
//    analogWrite(en1,mod(l));
//
//    analogWrite(en2, mod(r));
//
//    digitalWrite(L1, LOW);
//
//    digitalWrite(L2, HIGH);
//
//    digitalWrite(r1, HIGH);
//
//    digitalWrite(r2, LOW);
//
//  }
//
//  else if(l>=0 && r<=0)
//
//  {
//
//    analogWrite(en1,mod(l));
//
//    analogWrite(en2, mod(r));
//
//    digitalWrite(L1, HIGH);
//
//    digitalWrite(L2, LOW);
//
//    digitalWrite(r1, LOW);
//
//    digitalWrite(r2, HIGH);
//
//  }
//
//  else if(l==0 && r==0)
//
//  {
//
//    analogWrite(en1,0);
//
//    analogWrite(en2, 0);
//
//    digitalWrite(L1, LOW);
//
//    digitalWrite(L2, LOW);
//
//    digitalWrite(r1, LOW);
//
//    digitalWrite(r2, LOW);
//
//}
//
//}
//
//int mod(int v)
//
//{
//
//  if(v<0)
//
//  return -1*v;
//
//  else if(v>0)
//
//  return v;
//
//}
