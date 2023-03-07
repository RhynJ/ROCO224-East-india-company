#include <Servo.h>

Servo lowerMot;
int lowerPot = A0;
int lowerVal;

Servo upperMot;
int upperPot = A3;
int upperVal;


void setup() {
  // put your setup code here, to run once:
  upperMot.attach(3);
  pinMode(upperPot, INPUT); 
  
  lowerMot.attach(0);
  pinMode(lowerPot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lowerVal = analogRead(lowerPot);
  lowerVal = map(lowerPot,0,1028,0,180);
  lowerMot.write(lowerVal);

  upperVal = analogRead(upperPot);
  upperVal = map(lowerPot, 0, 1028, 0, 180);
  upperMot.write(lowerPot);

}
