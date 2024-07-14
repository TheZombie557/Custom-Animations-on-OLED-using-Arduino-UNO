This repository provides a comprehensive guide on how to create and display custom animations on an OLED display using Arduino.
By splitting GIFs into frames, resizing images using IrfanView, and uploading them to the display, you can achieve unique and engaging visual experiences.

 Introduction
Learn how to create custom animations on an OLED display using Arduino by splitting GIFs into frames, adjusting image sizes, and uploading them to the display for a unique visual experience.

----------------------
Hardware Requirements:

Arduino Uno or compatible board

OLED Display (SSD1306 or SH1106)

Push Button (optional)

Connecting Wires

Software Requirements:

Arduino IDE (https://www.arduino.cc/en/software)

Adafruit GFX Library

Adafruit SSD1306 Library or Adafruit SH1106 Library

IrfanView (for image resizing and conversion) https://www.irfanview.com/ 

GIF Splitter (any tool to split GIFs into individual frames)
using https://ezgif.com/split here

Setup
Wiring the OLED Display: Connect the OLED display to the Arduino as follows:

VCC to 5V
GND to GND
SDA to A4
SCL to A5
Installing Libraries: Install the required libraries from the Arduino Library Manager:

Adafruit GFX Library
Adafruit SSD1306 Library (or SH1106 Library if using SH1106)
Creating Animations
Splitting GIFs into Frames
Use a GIF splitter tool to break down your GIF into individual frames. Save these frames as separate image files.

---------------------------------------
Resizing Images and Converting to Bitmaps :

Open each frame in IrfanView.

Resize the image to fit your OLED display (128x32 resolution).

Save the resized images.

Converting Images to Bitmap

Convert the resized images to bitmap (.bmp) format using IrfanView:
Open the resized image in IrfanView.
Go to File > Save As.
Select Bitmap as the file type and save the image.
-----------------------
CODE:
{use the example code attached to the repository for reference }

(optional : This project will display a custom message or an animation depending on the push button state.)
-----------
NOTE

File Organization: Keeping files and images in a separate folder ensures smooth project execution and prevents confusion.

Image Sizing: Properly sizing and editing images is essential for visually appealing output on the OLED screen.

Connection Setup: Detailed steps on setting up connections between Arduino and OLED are crucial for accurate animation display.

Frame Splitting: Breaking down GIFs into frames allows for smooth animation on the OLED display.

Image Adjustment: Using IrfanView to match image sizes to OLED dimensions ensures optimal performance.

We welcome contributions! Feel free to open an issue or submit a pull request with improvements.
