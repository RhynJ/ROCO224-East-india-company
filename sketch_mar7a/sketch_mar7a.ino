#include <Servo.h>
#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>

Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();





Servo lowerMot;
int lowerPot = A0;
int lowerVal;

Servo upperMot;
int upperPot = A3;
int upperVal;

int servo;


void setup() {
  // put your setup code here, to run once:
  upperMot.attach(3);
  pinMode(upperPot, INPUT); 
  
  lowerMot.attach(0);
  pinMode(lowerPot, INPUT);

  Serial.begin(9600); //buad
  PWM.begin(); 
  PWM.setPWMFreq(60);  //frequency
}


void loop() {

  //this gathers the pots data and converts it to digital
  lowerVal = analogRead(lowerPot);
  lowerVal = map(lowerPot,0,1028,0,180);
  servo = 1;  //this will tell the function whixh servo to use
  PWM.setPWM(servo, 0, lowerVal); //this will tell the PWM which servo to use, and the value it wants the motor to spin to




  upperVal = analogRead(upperPot);
  upperVal = map(lowerPot, 0, 1028, 0, 180);
  servo =2;
  PWM.setPWM(servo, 0, upperVal);

}








