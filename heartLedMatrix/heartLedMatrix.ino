#include "LedControl.h"

LedControl lc = LedControl(12, 10, 11, 1);
int blinkWaitTime = 50;

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 2);
  lc.clearDisplay(0);

}

void heart() {
  lc.setColumn(0, 0, B00000000);
  lc.setColumn(0, 1, B01101100);
  lc.setColumn(0, 2, B10010010);
  lc.setColumn(0, 3, B10000010);
  lc.setColumn(0, 4, B01000100);
  lc.setColumn(0, 5, B00101000);
  lc.setColumn(0, 6, B00010000);
  lc.setColumn(0, 7, B00000000);
}

void heartBlink() {
  for (int i = 0; i < 4; i++) {
    heart();
    delay(blinkWaitTime);
    lc.clearDisplay(0);
    delay(blinkWaitTime);
  }
}
void fillHeart(){
  lc.setColumn(0, 0, B00000000);
  lc.setColumn(0, 1, B01101100);
  lc.setColumn(0, 2, B11111110);
  lc.setColumn(0, 3, B11111110);
  lc.setColumn(0, 4, B01111100);
  lc.setColumn(0, 5, B00111000);
  lc.setColumn(0, 6, B00010000);
  lc.setColumn(0, 7, B00000000);
}

void blinkEverySingleLed() {
  lc.setLed(0, 3, 2, true);
  delay(blinkWaitTime);
  lc.setLed(0, 3, 2, false);
  delay(blinkWaitTime);
  lc.setLed(0, 3, 2, true);
  delay(blinkWaitTime);
  lc.setLed(0, 4, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 4, 1, false);
  delay(blinkWaitTime);
  lc.setLed(0, 4, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 5, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 5, 1, false);
  delay(blinkWaitTime);
  lc.setLed(0, 5, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 6, 2, true);
  delay(blinkWaitTime);
  lc.setLed(0, 6, 2, false);
  delay(blinkWaitTime);
  lc.setLed(0, 6, 2, true);
  delay(blinkWaitTime);
  lc.setLed(0, 6, 3, true);
  delay(blinkWaitTime);
  lc.setLed(0, 6, 3, false);
  delay(blinkWaitTime);
  lc.setLed(0, 6, 3, true);
  delay(blinkWaitTime);
  lc.setLed(0, 5, 4, true);
  delay(blinkWaitTime);
  lc.setLed(0, 5, 4, false);
  delay(blinkWaitTime);
  lc.setLed(0, 5, 4, true);
  delay(blinkWaitTime);
  lc.setLed(0, 4, 5, true);
  delay(blinkWaitTime);
  lc.setLed(0, 4, 5, false);
  delay(blinkWaitTime);
  lc.setLed(0, 4, 5, true);
  delay(blinkWaitTime);
  lc.setLed(0, 3, 6, true);
  delay(blinkWaitTime);
  lc.setLed(0, 3, 6, false);
  delay(blinkWaitTime);
  lc.setLed(0, 3, 6, true);
  delay(blinkWaitTime);
  lc.setLed(0, 2, 5, true);
  delay(blinkWaitTime);
  lc.setLed(0, 2, 5, false);
  delay(blinkWaitTime);
  lc.setLed(0, 2, 5, true);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 4, true);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 4, false);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 4, true);
  delay(blinkWaitTime);
  lc.setLed(0, 0, 3, true);
  delay(blinkWaitTime);
  lc.setLed(0, 0, 3, false);
  delay(blinkWaitTime);
  lc.setLed(0, 0, 3, true);
  delay(blinkWaitTime);
  lc.setLed(0, 0, 2, true);
  delay(blinkWaitTime);
  lc.setLed(0, 0, 2, false);
  delay(blinkWaitTime);
  lc.setLed(0, 0, 2, true);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 1, false);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 1, false);
  delay(blinkWaitTime);
  lc.setLed(0, 1, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 2, 1, true);
  delay(blinkWaitTime);
  lc.setLed(0, 2, 1, false);
  delay(blinkWaitTime);
  lc.setLed(0, 2, 1, true);
  delay(blinkWaitTime);
}




void loop() {
  heart();
  blinkEverySingleLed();
  heartBlink();
  delay(blinkWaitTime);
  fillHeart();
  delay(1000);
}
