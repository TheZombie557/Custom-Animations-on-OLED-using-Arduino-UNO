
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);

int xx=70;
int yy=30;
int zz=20;
int ss=30;

const unsigned char PROGMEM pawBitmap [] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0xE0, 0xFF, 0xFF, 0x01, 0xC0, 0x7F, 0xFE, 0x01, 0x80, 0x7F, 0xFE, 0x00, 0x80, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x01, 0x80, 0x3F, 0xC3, 0x01, 0x80, 0x61, 0x81, 0x01, 0x80, 0x40, 0x80, 0xC7, 0xC0, 0x80, 0x00, 0x7F, 0xF7, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x78, 0x3E, 0x00, 0x00, 0x70, 0x1E, 0x00, 0x00, 0xE0, 0x0E, 0x00, 0x00, 0xC0, 0x06, 0x01, 0x80, 0x80, 0x06, 0x03, 0x81, 0x00, 0x03, 0x07, 0xF6, 0x00, 0x00, 0xDF, 0xFC, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x3F, 0xFE, 0x0F, 0xFF, 0xFF};
const unsigned char PROGMEM pawBitmap2 [] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0xE0, 0xFF, 0xFF, 0x01, 0xC0, 0x7F, 0xFE, 0x01, 0x80, 0x7F, 0xFE, 0x00, 0x80, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFE, 0x01, 0x80, 0x3F, 0xC3, 0x01, 0x80, 0x61, 0x81, 0x01, 0x80, 0x40, 0x80, 0xC7, 0xC0, 0x80, 0x00, 0x7F, 0xF7, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x78, 0x3E, 0x00, 0x00, 0x70, 0x1E, 0x00, 0x00, 0xE0, 0x0E, 0x00, 0x00, 0xC0, 0x06, 0x01, 0x80, 0x80, 0x06, 0x03, 0x81, 0x00, 0x03, 0x07, 0xF6, 0x00, 0x00, 0xDF, 0xFC, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x3F, 0xFE, 0x0F, 0xFF, 0xFF};



void setup() {
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(2000);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
}

void loop() {
  String text = "Paws !! ";
  int textWidth = text.length() * 6;

  for (int i = 0; i <= SCREEN_WIDTH; i++) {
    display.clearDisplay();
    display.setCursor(i, 0); // Set the position for text
    display.print(text);
    display.drawBitmap(xx, yy,pawBitmap,32,32, 1);
    display.drawBitmap(zz, ss,pawBitmap2,32,32, 1);
    display.display();
    delay(100);

  }
}
