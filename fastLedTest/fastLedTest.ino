#include <FastLED.h>

#define NUM_LEDS 10
#define DATA_PIN 3

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    leds[i] = CRGB(random(255), random(255),random(255));
    FastLED.show();
    delay(30);
    //leds[i] = CRGB::Black;
    FastLED.show();
    delay(30);
  }
  for (int i = 8; i > 0; i--) {
    leds[i] = CRGB(random(255), random(255),random(255));
    FastLED.show();
    delay(30);
    //leds[i] = CRGB::Black;
    FastLED.show();
    delay(30);
  }
}
