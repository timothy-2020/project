//Install [Adafruit_NeoPixel_Library](https://github.com/adafruit/Adafruit_NeoPixel) first.

// It works locally for me and results in a inner bright flashing with various colours. The other 6 LEDs around do nothing. 
// Your challenge:  OTA merge, which is missing.     for ESP32-Board: WEMOS LOLIN32

#include <Adafruit_NeoPixel.h>


#define PIN      16   // 16 equals the D4 of Wemos D1 mini  on ESP32


// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(7, PIN, NEO_GRB + NEO_KHZ800);



void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.



  // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {

        pixels.setPixelColor(0, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.

        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(200); // Delay for a period of time (in milliseconds).
      }
    }
  }
}
