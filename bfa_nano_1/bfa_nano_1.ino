#include <ArducamSSD1306.h>    // Modification of Adafruit_SSD1306 for ESP8266 compatibility
#include <Adafruit_GFX.h>   // Needs a little change in original Adafruit library (See README.txt file)
#include <Wire.h>           // For I2C comm, but needed for not getting compile error

/*
HardWare I2C pins
A4   SDA
A5   SCL
*/

// Pin definitions
#define OLED_RESET  16  // Pin 15 -RESET digital signal

#define LOGO16_GLCD_HEIGHT 128
#define LOGO16_GLCD_WIDTH  64

ArducamSSD1306 display(OLED_RESET); // FOR I2C


void setup()
{
  // Start Serial
  Serial.begin(115200);

  // SSD1306 Init
  display.begin();  // Switch OLED
  // Clear the buffer.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello!");
  display.setTextSize(2);
  display.setCursor(0,16);
  display.println("ATTENTION!");
  display.setTextSize(1);
  display.setCursor(0,48);
  display.println("This is not ART!");
  display.display();



}


void loop() {

}
