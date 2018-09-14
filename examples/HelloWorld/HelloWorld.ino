/*
  QwiicSerLCD Library - Hello World

  Demonstrates the use of a SparkFun AVR-Based Serial Enabled LCD
  display with a Qwiic adapter.

  This sketch prints "Hello World!" to the LCD
  and shows the time.

  The circuit:
   SparkFun RGB OpenLCD Serial display connected through
   a Sparkfun Qwiic adpater to an Ardruino with a
   Qwiic shield or a Sparkfun Blackboard with Qwiic built in.

   The Qwiic adapter should be attached to the display as follows:

  Display	/ Qwiic Cable Color
 	GND	/	Black
 	RAW	/	Red
 	SDA	/	Blue
 	SCL	/	Yellow

  Note: If you connect directly to a 5V Arduino instead, you *MUST* use
  a level-shifter to convert the i2c voltage levels down to 3.3V for the display.

  Based on the LiquidCrystal code originally by David A. Mellis
  and the OpenLCD code by Nathan Seidle at SparkFun.

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

  More info on Qwiic here:
  https://www.sparkfun.com/qwiic

  AVR-Based Serial Enabled LCDs Hookup Guide
  https://learn.sparkfun.com/tutorials/avr-based-serial-enabled-lcds-hookup-guide
*/

#include <Wire.h>

#include <SerLCD.h> //Click here to get the library: http://librarymanager/All#SparkFun_SerLCD
QwiicSerLCD lcd; // initialize the library with default i2c address 0x72

void setup() {
  Wire.begin();
  Wire.setClock(400000); //Optional - set I2C SCL to High Speed Mode of 400kHz

  // set up the LCD for I2C
  lcd.begin(Wire);
  // Print a message to the LCD.
  lcd.print("Hello, World!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}

