#include <Servo.h>

Servo servo1, servo2;
const int joyXPin = 0;
const int joyYPin = 1;
const int swPin = 7;
const int servo1Pin = 3;
const int servo2Pin = 5;
int joyX, joyY;
int servoX, servoY;

void setup() {
  pinMode(swPin, INPUT);
  digitalWrite(swPin, HIGH);
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servoReset();
  Serial.begin(9600);
  Serial.println("Servos are ready!");
}

void loop() {
  joyX = analogRead(joyXPin);
  joyY = analogRead(joyYPin);

  //Serial.println(joyX);
  //Serial.println(joyY);

  servoX = map(joyX, 0, 1024, 0, 180);
  servoY = map(joyY, 0, 1024, 0, 180);

  servo1.write(servoX);
  servo2.write(servoY);
  //delay(500);
}

void servoReset() {
  servo1.write(90);
  servo2.write(90);
}
