#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_IS31FL3731.h>

Adafruit_IS31FL3731 matrix = Adafruit_IS31FL3731();

static const uint8_t PROGMEM
  hearts[] = 
  { 0x3E, 0x51, 0xDC, 0x08, 0x20,
    0x08, 0xFB, 0xFE, 0x08, 0x20,
    0x08, 0x73, 0xFE, 0x08, 0x20,
    0x08, 0x21, 0xFC, 0x08, 0x20,
    0x08, 0x00, 0xF9, 0x48, 0x20,
    0x08, 0x00, 0x73, 0xE8, 0x20,
    0x08, 0x00, 0x21, 0xC8, 0x20,
    0x3E, 0x00, 0x00, 0x87, 0xC0 };

void setup() {

  if (! matrix.begin()) {
    while (1);
  }
  
}


void loop() {
  matrix.setRotation(0);

  matrix.clear();

  //matrix.drawBitmap(0,0, hearts, 19, 8, 255/4);
  //delay(500);
  //matrix.clear();

  for (int8_t x=36; x>=-36; x--) {
    matrix.clear();
    //matrix.setCursor(x,0);
    matrix.drawBitmap(x,0, hearts, 36, 8, 255/4);
    //matrix.print("Hello");
    delay(50);
  }
  delay(450);
}
