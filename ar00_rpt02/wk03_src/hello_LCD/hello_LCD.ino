/*
  LiquidCrystal Library - Hello World

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello, ARnn!");
}

void loop() {
  // set the cursor to column 0, line 1
  lcd.setCursor(0, 1);  // second line, first column
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  lcd.print(" sec");
}


