#include <Servo.h>
Servo normalServo1, normalServo2, normalServo3, normalServo4
  , normalServo5, normalServo6;
//Create Object Normal Servo 1~6 

void setup() {
  for(int pinNo=2; pinNo < 8; normalServo1.attach(pinNo++));
 //Pin connect each Servo control signal 1~6 at Arduino Mega Board pwm 2~7

//TODO: Set up the each servo's initial value

}

void testNormalServo(Servo normalServo){
  normalServo.write(0);
  delay(1000);
  normalServo.write(180);
  delay(1000);
}
//Just use to test

void loop() {
  testNormalServo(normalServo1);
  testNormalServo(normalServo2);
  testNormalServo(normalServo3);
  testNormalServo(normalServo4);
  testNormalServo(normalServo5);
  testNormalServo(normalServo6);

}
