/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo.writeMicroseconds(1500);
  delay(2000);
}

void loop() {
   myservo.writeMicroseconds(500);
  delay(2000);
  myservo.writeMicroseconds(1500);
  delay(2000);
  myservo.writeMicroseconds(2500);
  delay(2000);
  myservo.writeMicroseconds(1500);
  delay(2000);
  myservo.writeMicroseconds(500);
  delay(2000);
  myservo.writeMicroseconds(1500);
  delay(2000);

}
