#include <FastLED.h>


#define DATA_PIN 3

#define NUM_LEDS 50

CRGB leds[NUM_LEDS];

void setup() {

FastLED.addLeds<WS2811,DATA_PIN,RGB>(leds,NUM_LEDS);
 
}

void loop() {
   FastLED.setBrightness(255);
    leds[1] = CRGB::Blue;
      FastLED.show();
 
}
