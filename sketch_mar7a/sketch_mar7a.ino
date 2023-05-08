#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>

Adafruit_PWMServoDriver motorPWM = Adafruit_PWMServoDriver();



int servo;



void setup() {
  // put your setup code here, to run once:
  //  pinMode(upperPot, INPUT);
  Serial.begin(9600);
  motorPWM.begin();
  motorPWM.setPWMFreq(60);
}


void loop() {

  //this gathers the pots data and converts it to digital
  float lowerVal = analogRead(A0);
  servo = 0;  //this will tell the function whixh servo to use
  lowerVal = lowerVal;
  motorPWM.setPWM(servo, 0, lowerVal);  //this will tell the PWM which servo to use, and the value it wants the motor to spin to
  


  //this gathers the pots data and converts it to digital
  float upperVal = analogRead(A2);
  servo = 1;  //this will tell the function whixh servo to use
  upperVal = upperVal;
  motorPWM.setPWM(servo, 0, upperVal);  //this will tell the PWM which servo to use, and the value it wants the motor to spin to
}
