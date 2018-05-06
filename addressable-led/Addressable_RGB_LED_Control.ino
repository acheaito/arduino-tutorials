#include <Adafruit_NeoPixel.h>

#define PIN            5
#define NUMPIXELS      2
#define DELAY_MS 500

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

void setup() {
  pixels.begin(); 
}

void loop() {  
    for (int i = 0; i < NUMPIXELS; i++) {
      setPixelColor(i, 255, 0, 0);
      delay(DELAY_MS);
      setPixelColor(i, 0, 255, 0);
      delay(DELAY_MS);
      setPixelColor(i, 0, 0, 255);
      delay(DELAY_MS);
      setPixelColor(i, 0, 0, 0);
    }  
}

void setPixelColor(int pixelIndex, int red, int green, int blue) {
  pixels.setPixelColor(pixelIndex, pixels.Color(red, green, blue));
  pixels.show();
}

