#include <FastLED.h>

// constants won't change
#define NUM_LEDS 20 // Number of LED's on Strip
#define LED_PIN 2 // Arduino pin connected to LED Strip pin
#define STARTBUT_PIN 3 // Arduino pin connected to button's pin
 
 // variables will change:
///int STARTbuttonCurrentState; // the current state of button
///int STARTbuttonLastState; // the previous state of button
///int STARTgamestate = LOW; // the current state of LED
bool loopRunning = false;

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600); // initialize serial
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5,50);
  pinMode(STARTBUT_PIN, INPUT); // set arduino pin to input pull-up mode

  ///STARTbuttonCurrentState = digitalRead(STARTBUT_PIN);
  
}

void loop() {
  ///STARTbuttonLastState = STARTbuttonCurrentState; // save the last state
  ///STARTbuttonCurrentState = digitalRead(STARTBUT_PIN); // read new state

  buttonState = digitalRead(STARTBUT_PIN);
  if((buttonState==LOW) && (prevbuttonState==HIGH))
  {
    loopRunning = !loopRunning
  }
  prevbuttonState=buttonState

  if (loopRunning)
  {
    Serial.println("The button is pressed");
    for(int i = 0; i < NUM_LEDS; i++) 
    {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(10);
    leds[i] = CRGB::Black;
      }
    for(int i = NUM_LEDS - 1; i >= 0; i--) 
    {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(10);      
    leds[i] = CRGB::Black;
    }
  }

  


  }






