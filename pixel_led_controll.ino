/**************HRTE PROJECTS(created by Uchitha Induranga)**************************************************************************************************************************************
*/

char data =0;

#include <FastLED.h>

#define DATA_PIN     3
#define NUM_LEDS    50

CRGB leds[NUM_LEDS];

void setup() {
   Serial.begin(9600);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
}
void loop() {
 
 if(Serial.available()>0)
   {   data= Serial.read();
       Serial.println(data); // reading the data received from the bluetooth module/ meeken karane serial monitor ekata ena data kiyawana eka
 
    //man app eka hadadi dala thiyene me values, oya man hadala thiyena app eka pawichi karana yanawanam pahala thiyena values wenas karana epa
    if ( data == '1') {
  for (int i = 0; i < 50 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(20);
  }
  
    }
 if ( data == '2') {
  for (int i = 0; i < 50 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(20);
  }
  
    }
   if ( data == '3') {
 for (int i = 0; i < 50 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(20);
  }
  
    }

   if ( data == '4') {
 for (int i = 0; i < 50 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::White;
    FastLED.show();
    delay(20);
  }
  
    } 
     if ( data == '6') {
 leds[NUM_LEDS] = CRGB::Black;
  FastLED.show();
 delay(100);
  
    }
if ( data == '5') {
 
  pat1();
  pat2();
}}}

void pat2() {
  int delay1 = 20;
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(delay1);
  }
  for (int i = 0; i < 4 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Yellow;
    FastLED.show();
    delay(delay1);
  }
  for (int i = 0; i < 3 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
      delay(delay1);
  }
  for (int i = 0; i < 2 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::White;
    FastLED.show();
      delay(delay1);
  }
  for (int i = 0; i < NUM_LEDS / 5; i++) {
    leds[i] = CRGB::OrangeRed;
    FastLED.show();
    delay(delay1);
  }
   for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::White;
    FastLED.show();
    delay(delay1);
  }
  for (int i = 0; i < 4 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(delay1);
  }
  for (int i = 0; i < 3 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Yellow;
    FastLED.show();
      delay(delay1);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(delay1);
  }
  for (int i = 0; i < 4 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Yellow;
    FastLED.show();
    delay(delay1);
  }
  for (int i = 0; i < 3 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
      delay(delay1);
  }
  for (int i = 0; i < 2 * NUM_LEDS / 5; i++) {
    leds[i] = CRGB::White;
    FastLED.show();
      delay(delay1);
  }
  for (int i = 0; i < NUM_LEDS / 5; i++) {
    leds[i] = CRGB::OrangeRed;
    FastLED.show();
    delay(delay1);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
    FastLED.show();
    delay(20);
  }
}
void pat1() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    leds[i + 1] = CRGB::Red;
    leds[i + 2] = CRGB::Blue;
    FastLED.show();
    delay(10);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
  for (int i = NUM_LEDS; i > 0; i--) {
    leds[i] = CRGB::Red;
    leds[i + 1] = CRGB::Red;
    leds[i + 2] = CRGB::Blue;
    FastLED.show();
    delay(10);
    leds[i - 3] = CRGB::Black;
    FastLED.show();
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::BurlyWood ;
    leds[i + 1] = CRGB::BurlyWood ;
    leds[i + 2] = CRGB::BurlyWood ;
    FastLED.show();
    delay(10);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
  for (int i = NUM_LEDS; i > 0; i--) {
    leds[i] = CRGB::DeepSkyBlue ;
    leds[i + 1] = CRGB::DeepSkyBlue ;
    leds[i + 2] = CRGB::DeepSkyBlue ;
    FastLED.show();
    delay(10);
    leds[i - 3] = CRGB::Black;
    FastLED.show();
  }
}
