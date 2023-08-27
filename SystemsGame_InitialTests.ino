#include <ezButton.h>
#include <FastLED.h>

#define LOOP_STATE_STOPPED 0
#define LOOP_STATE_STARTED 1
#define LED_PIN 3 // Arduino pin connected to LED Strip pin
#define NUM_LEDS 20
CRGB leds[NUM_LEDS];

ezButton button(2);  // create ezButton object that attach to pin 2;
int loopState = LOOP_STATE_STOPPED;


void setup() {
  /*******************
   *  your setup code
   *******************/
  Serial.begin(9600); // initialize serial
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5,50);

  button.setDebounceTime(50); // set debounce time to 50 milliseconds
}

void loop() {
  button.loop(); // MUST call the loop() function first

  if (button.isPressed()) {
    if (loopState == LOOP_STATE_STOPPED)
      loopState = LOOP_STATE_STARTED;
    else // if(loopState == LOOP_STATE_STARTED)
      loopState = LOOP_STATE_STOPPED;
  }

  if (loopState == LOOP_STATE_STARTED) {
    /******************
     *  your loop code
     ******************/
     for(int i = 0; i < NUM_LEDS; i++) 
          {
          leds[i] = CRGB::Red;
          FastLED.show();
          delay(20);
          leds[i] = CRGB::Black;
            }
          for(int i = NUM_LEDS - 1; i >= 0; i--) 
          {
          leds[i] = CRGB::Red;
          FastLED.show();
          delay(20);      
          leds[i] = CRGB::Black;
          }
  }
}
