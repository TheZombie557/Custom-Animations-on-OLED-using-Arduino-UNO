# Introduction
This repository provides a comprehensive guide on how to create and display custom animations on an OLED display using Arduino.
By splitting GIFs into frames, resizing images using IrfanView, and uploading them to the display, you can achieve unique and engaging visual experiences.

----------------------
# Hardware Requirements:

Arduino Uno or compatible board

OLED Display (SSD1306 or SH1106)

Push Button (optional)

Connecting Wires

# Software Requirements:

Arduino IDE (https://www.arduino.cc/en/software)

Adafruit GFX Library

Adafruit SSD1306 Library or Adafruit SH1106 Library

IrfanView (for image resizing and conversion) https://www.irfanview.com/ 

GIF Splitter (any tool to split GIFs into individual frames)
using https://ezgif.com/split here

# Wiring Setup
Wiring the OLED Display: Connect the OLED display to the Arduino as follows:

VCC to 5V

GND to GND

SDA to A4

SCL to A5


---------------------------------------
# Resizing Images and Converting to Bitmaps :

Open each frame in IrfanView.

Resize the image to fit your OLED display (128x32 resolution).

Save the resized images.

Converting Images to Bitmap

Convert the resized images to bitmap (.bmp) format using IrfanView:

Open the resized image in IrfanView.

Go to File > Save As.

Select Bitmap as the file type and save the image.

-----------------------
# CODE:
```
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);

int xx=30;
int yy=20;
int tt=100;

const unsigned char PROGMEM frame0 [] = ("Bitmap code"}
const unsigned char PROGMEM frame1 [] = ("Bitmap code"}
...
const unsigned char PROGMEM framex [] = ("Bitmap code"}
void setup() {
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(2000);

}

void loop()
{
  for (int i = 0; i < 11; i++)
   {
    display.clearDisplay();
    
    // Display the string
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(5,0);
    String text = "LY! ";
    display.println(text);
    
    // Display the animation frame
    display.drawBitmap(xx, yy, getFrame(i), 48, 48, 1);
    display.display();
    delay(tt);
   }
}

const unsigned char* getFrame(int frameIndex) {
  switch (frameIndex) {
    case 0: return frame0;
    case 1: return frame1;
    ...
    case x: return framex;
    default: return frame0;
  }
}
```
{use the example sketch attached to the repository for reference }

optional : This project will display a custom message or an animation depending on the push button state.
-----------
# NOTE

File Organization: Keeping files and images in a separate folder ensures smooth project execution and prevents confusion.

Image Sizing: Properly sizing and editing images is essential for visually appealing output on the OLED screen.

Connection Setup: Detailed steps on setting up connections between Arduino and OLED are crucial for accurate animation display.

Frame Splitting: Breaking down GIFs into frames allows for smooth animation on the OLED display.

Image Adjustment: Using IrfanView to match image sizes to OLED dimensions ensures optimal performance.

We welcome contributions! Feel free to open an issue or submit a pull request with improvements.
