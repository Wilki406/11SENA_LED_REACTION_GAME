#include <FastLED.h>
#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

#define NUM_LEDS 30
#define DATA_PIN 11
#define SCORE_PIN 12
#define SCORE_LEDS 10
#define BRIGHTNESS  95

CRGB leds[NUM_LEDS];
CRGB sleds[NUM_LEDS];
U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0); 

bool reachedEnd = false;
byte gameState = 0;
//byte ledSpeed = 0;
int period = 1000;
unsigned long time_now = 0;
byte Position = 0;
byte Position2 = 0;
byte level = 0;
int speakerPin = 8;
byte previousgameState = 0;
const byte ledSpeed[6] = {100, 50, 40, 35, 20, 5};
bool secondchanced = false;
bool ghosted = false;
bool Specialsecondchanced = false;

uint8_t hue = 0;

bool findRandom = false;
byte spot = 0;
byte fakespot1 = random(30);
byte fakespot2 = random(30);


void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2812B, SCORE_PIN, GRB>(sleds, SCORE_LEDS);
  FastLED.setBrightness(BRIGHTNESS );
  u8g2.begin();
  pinMode(4, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Reset");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (gameState == 0) {

  while(gameState == 0)
  {
    for (int i = 0; i < NUM_LEDS; ++i) {
    leds[i] = CHSV(hue + (i * 10), 255, 255);
  }

  //You can change the pattern speed here
  EVERY_N_MILLISECONDS(1){
    hue++;
  }
  FastLED.show();

  u8g2.clearBuffer();          // clear the internal memory
  u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  u8g2.drawStr(31,29,"PLAY?");  // write something to the internal memory
  u8g2.sendBuffer();         // transfer internal memory to the display


  if (digitalRead(4) == LOW) {
      Position = 0;
      findRandom = true;
      u8g2.clearBuffer();         // clear the internal memory
      u8g2.sendBuffer();         // transfer internal memory to the display
      delay(500);
      for (byte i = 0; i < NUM_LEDS; i++) {
        leds[i].setRGB(0, 0, 0);
        delay(40);
        FastLED.show();
      }
      for (byte i = 0; i < SCORE_LEDS; i++) {
        sleds[i].setRGB(0, 0, 0);
        FastLED.show();
      }
      gameState = 1;
      }
    }
  }
    //default stage0
    //fill_rainbow(leds, NUM_LEDS, 0, 7); //2 = longer gradient strip

    /// fill_rainbow(sleds, SCORE_LEDS, 0, 7); //2 = longer gradient strip SCORE LED STRIP


  //   u8g2.clearBuffer();          // clear the internal memory
  //   u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  //   u8g2.drawStr(31,29,"PLAY?");  // write something to the internal memory
  //   u8g2.sendBuffer();         // transfer internal memory to the display

  //   if (digitalRead(4) == LOW) {
  //     Position = 0;
  //     findRandom = true;
  //     u8g2.clearBuffer();         // clear the internal memory
  //     u8g2.sendBuffer();         // transfer internal memory to the display
  //     delay(500);
  //     for (byte i = 0; i < NUM_LEDS; i++) {
  //       leds[i].setRGB(0, 0, 0);
  //       delay(40);
  //       FastLED.show();
  //     }
  //     for (byte i = 0; i < SCORE_LEDS; i++) {
  //       sleds[i].setRGB(0, 0, 0);
  //       FastLED.show();
  //     }
  //     gameState = 1;
  //   }
  //   FastLED.show();
  // }

  if (gameState == 1) {
    previousgameState = gameState;

    u8g2.clearBuffer();                      // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 1");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[0];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot - 2].setRGB(255, 190, 0);
      leds[spot - 1].setRGB(255, 190, 0);
      leds[spot].setRGB(0, 255, 0);
      leds[spot + 1].setRGB(255, 190, 0);
      leds[spot + 2].setRGB(255, 190, 0);
      sleds[0].setRGB(0, 255, 0);
      PlayGame(spot - 1, spot + 1);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      findRandom = false;
      if (Position > spot - 2 && Position < spot + 4) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 2) {
//    period = 320;
    previousgameState = gameState;
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 2");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[1];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot - 2].setRGB(255, 190, 0);
      leds[spot - 1].setRGB(255, 190, 0);
      leds[spot].setRGB(0, 255, 0);
      leds[spot + 1].setRGB(255, 190, 0);
      leds[spot + 2].setRGB(255, 190, 0);
      sleds[1].setRGB(0, 255, 0);
      PlayGame(spot - 1, spot + 1);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      if (Position > spot - 2 && Position < spot + 4) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 3) {
    previousgameState = gameState;
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 3");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[2];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot - 1].setRGB(255, 140, 0);
      leds[spot].setRGB(0, 255, 0);
      leds[spot + 1].setRGB(255, 140, 0);
      sleds[2].setRGB(0, 255, 0);
      PlayGame(spot - 1, spot + 1);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      findRandom = false;
      if (Position > spot - 1 && Position < spot + 3) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 4) {
    previousgameState = gameState;
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 4");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[3];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot - 1].setRGB(255, 140, 0);
      leds[spot].setRGB(0, 255, 0);
      leds[spot + 1].setRGB(255, 140, 0);
      sleds[3].setRGB(0, 255, 0);
      PlayGame(spot - 1, spot + 1);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      findRandom = false;
      if (Position > spot - 1 && Position < spot + 3) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 5) {
    previousgameState = gameState;
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 5");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[2];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot].setRGB(0, 255, 0);
      sleds[4].setRGB(0, 255, 0);
      PlayGame(spot, spot);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      if (Position == spot+1) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 6) {
    previousgameState = gameState;
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 6");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[3];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot].setRGB(0, 255, 0);
      sleds[5].setRGB(0, 255, 0);
      PlayGame(spot, spot);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      if (Position == spot+1) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 7) {
    previousgameState = gameState;
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 7");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[4];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot].setRGB(0, 255, 0);
      PlayGame(spot, spot);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      if (Position == spot+1) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 8) {
    previousgameState = gameState;
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"Level 8");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[4];

    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        findRandom = false;
      }
      leds[spot].setRGB(0, 255, 0);
      PlayGame(spot, spot);
    }
    if (digitalRead(4) == LOW) {
      delay(300);
      if (Position == spot+1) {
        level = gameState;
        gameState = 98;
      } else {
        gameState = 99;
      }
    }
  }

  if (gameState == 10) {
    u8g2.clearBuffer();         // clear the internal memory
    u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
    u8g2.drawStr(4,29,"SPEC LVL");  // write something to the internal memory
    u8g2.sendBuffer();         // transfer internal memory to the display
    period = ledSpeed[4];
    if (millis() > time_now + period) {
      time_now = millis();
      if (findRandom) {
        spot = random(43) + 3;
        fakespot1 = random(43) + 3;
        fakespot2 = random(43) + 3;
        findRandom = false;
      }

      while(fakespot1 == spot)
      {

        fakespot1 = random(16) + 3;
      }

      while(fakespot2 == spot || fakespot2 == fakespot1)
      {
        fakespot2 = random(16) + 3;
      }



      Serial.println(fakespot1);
      Serial.println(fakespot2);
      leds[spot].setRGB(0, 255, 0);
      leds[fakespot1].setRGB(0, 255, 0);
      leds[fakespot2].setRGB(0, 255, 0);
      PlayGame(spot, spot);
    }

    if (digitalRead(4) == LOW) {
      delay(300);
      if (Position == spot+1) {
        level = gameState;
        winnerghost();
      } else {
        gameState = 97;
      }
    }
  }

  if (gameState == 98) {
    // generate pseudo float in the range of 0 to 100
    float randNumbergh = random(100);

    // probability of 10%
    if (randNumbergh >= 90   && ghosted == false)
    {
      ghostLevel();
    }

    else
    {
      winner();
      Serial.println(randNumbergh);
    }
  }

  if (gameState == 99) {

    // generate pseudo float in the range of 0 to 100
    float randNumbersc = random(100);

    // probability of 30%
    if (randNumbersc >= 70 && secondchanced == false)
    {
      secondchance();
    }

    else
    {
      loser();
    }
  }

  if (gameState == 97) {

    // generate pseudo float in the range of 0 to 100
    float randNumberSsc = random(100);

    // probability of 30%
    if (randNumberSsc >= 70 && Specialsecondchanced == false)
    {
      Specialsecondchance();
    }

    else
    {
      loser();
    }
  }
}

void PlayGame(byte bound1, byte bound2) {
  leds[Position].setRGB(255, 0, 0);
  if (Position < bound1 + 1 || Position > bound2 + 1) {
    leds[Position - 1].setRGB(0, 0, 0);
  }
  FastLED.show();
  Position++;
  if (Position >= NUM_LEDS) {
    leds[Position - 1].setRGB(0, 0, 0);
    Position = 0;
  }
}


void winner() {
  for (byte i = 0; i < 3; i++) {
    for (byte j = 0; j < NUM_LEDS; j++) {
      leds[j].setRGB(0, 255, 0);
    }
    FastLED.show();
    tone(speakerPin, 1000, 300);
    delay(500);
    clearLEDS();
    FastLED.show();
    delay(500);
  }
  findRandom = true;
  Position = 0;

  gameState = level + 1;
  if (gameState > 8) {
    gameState = 0;
  }
}

void winnerghost() {
  for (byte i = 0; i < 3; i++) {
    for (byte j = 0; j < NUM_LEDS; j++) {
      leds[j].setRGB(0, 255, 0);
    }
    FastLED.show();
    tone(speakerPin, 1000, 300);
    delay(500);
    clearLEDS();
    FastLED.show();
    delay(500);
  }
  findRandom = true;
  Position = 0;

  gameState = previousgameState + 1;
}

void loser() {
  for (byte i = 0; i < 3; i++) {
    for (byte j = 0; j < NUM_LEDS; j++) {
      leds[j].setRGB(255, 0, 0);
    }
    FastLED.show();
    tone(speakerPin, 250, 300);
    delay(500);
    clearLEDS();
    FastLED.show();
    delay(500);
  }

  // reset states
  secondchanced = false;
  ghosted = false;
  Specialsecondchanced = false;
  gameState = 0;

}

void secondchance() {
  u8g2.clearBuffer();          // clear the internal memory
  u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  u8g2.drawStr(0,29,"re do");  // write something to the internal memory
  u8g2.sendBuffer();         // transfer internal memory to the display
  for (byte i = 0; i < 3; i++) {
    for (byte j = 0; j < NUM_LEDS; j++) {
      leds[j].setRGB(0, 0, 255);
    }
    FastLED.show();
    tone(speakerPin, 1000, 300);
    delay(500);
    clearLEDS();
    FastLED.show();
    delay(500);
  }
  findRandom = true;
  Position = 0;

  gameState = previousgameState;
  // set secondchance bool to true to stop second chance being applicable in future.
  secondchanced = true;
}

void Specialsecondchance() {
  u8g2.clearBuffer();          // clear the internal memory
  u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  u8g2.drawStr(0,29,"re do");  // write something to the internal memory
  u8g2.sendBuffer();         // transfer internal memory to the display
  for (byte i = 0; i < 3; i++) {
    for (byte j = 0; j < NUM_LEDS; j++) {
      leds[j].setRGB(0, 0, 255);
    }
    FastLED.show();
    tone(speakerPin, 1000, 300);
    delay(500);
    clearLEDS();
    FastLED.show();
    delay(500);
  }
  findRandom = true;
  Position = 0;

  gameState = previousgameState + 1;
  // set secondchance bool to true to stop second chance being applicable in future.
  Specialsecondchanced = true;
}

void ghostLevel() {
  u8g2.clearBuffer();          // clear the internal memory
  u8g2.setFont(u8g2_font_logisoso28_tr);  // choose a suitable font at https://github.com/olikraus/u8g2/wiki/fntlistall
  u8g2.drawStr(0,29,"SPEC LVL");  // write something to the internal memory
  u8g2.sendBuffer();         // transfer internal memory to the display

  Twinkle(0,0,0xff,20,100,false);

  // set secondchance bool to true to stop second chance being applicable in future.
  ghosted = true;
  gameState = 10;
}

void Twinkle(byte red, byte green, byte blue, int Count, int SpeedDelay, boolean OnlyOne) {
  setAll(0,0,0);

  for (int i=0; i<Count; i++) {
     setPixel(random(NUM_LEDS),red,green,blue);
     showStrip();
     delay(SpeedDelay);
     if(OnlyOne) {
       setAll(0,0,0);
     }
   }
  delay(SpeedDelay);
  setAll(0,0,0);
}

void showStrip() {
 #ifdef ADAFRUIT_NEOPIXEL_H
   // NeoPixel
   strip.show();
 #endif
 #ifndef ADAFRUIT_NEOPIXEL_H
   // FastLED
   FastLED.show();
 #endif
}

void setPixel(int Pixel, byte red, byte green, byte blue) {
 #ifdef ADAFRUIT_NEOPIXEL_H
   // NeoPixel
   strip.setPixelColor(Pixel, strip.Color(red, green, blue));
 #endif
 #ifndef ADAFRUIT_NEOPIXEL_H
   // FastLED
   leds[Pixel].r = red;
   leds[Pixel].g = green;
   leds[Pixel].b = blue;
 #endif
}

void setAll(byte red, byte green, byte blue) {
  for(int i = 0; i < NUM_LEDS; i++ ) {
    setPixel(i, red, green, blue);
  }
  showStrip();
}

void clearLEDS() {
  for (byte i = 0; i < NUM_LEDS; i++) {
    leds[i].setRGB(0, 0, 0);
  }
}
void winAll(){

}
