// LCD Display utilizing LiquidCrystal library 
// https://www.arduino.cc/reference/en/libraries/liquidcrystal/

// Example: 
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello World!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}s

// Working Ex
// const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
// LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// // custom pixels:

// byte topleft[8] = {
//   0b11111,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000
// };

// byte bottomleft[8] = {
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b10000,
//   0b11111
// };

// byte topright[8] = {
//   0b11111,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001
// };

// byte bottomright[8] = {
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b00001,
//   0b11111
// };

// byte open[8] = {
//   0b11111,
//   0b11111,
//   0b11111,
//   0b11111,
//   0b11111,
//   0b11111,
//   0b11111,
//   0b11111
// };

// byte close[8] = {
//   0b00000,
//   0b00000,
//   0b00000,
//   0b11111,
//   0b00000,
//   0b00000,
//   0b00000,
//   0b00000
// };

// void setup() {
//   // initialize LCD and set up the number of columns and rows:
//   lcd.begin(16, 2);

// //   lcd.createChar(0, eye);
// //   lcd.createChar(3, open);
//   lcd.createChar(4, close);
//   lcd.createChar(5, topleft);
//   lcd.createChar(6, bottomleft);
//   lcd.createChar(7, topright);
//   lcd.createChar(8, bottomright);

//   lcd.setCursor(0, 0);
//   lcd.write(5);
//   lcd.setCursor(0, 1);
//   lcd.write(6);
//   lcd.setCursor(1, 0);
//   lcd.write(7);
//   lcd.setCursor(1, 1);
//   lcd.write(8);

//   lcd.setCursor(14, 0);
//   lcd.write(5);
//   lcd.setCursor(14, 1);
//   lcd.write(6);
//   lcd.setCursor(15, 0);
//   lcd.write(7);
//   lcd.setCursor(15, 1);
//   lcd.write(8);

// }

// void loop() {
//   int sensorReading = analogRead(A0);
//   int delayTime = map(sensorReading, 0, 1023, 200, 1000);

 
//   lcd.setCursor(5, 1);
//   lcd.write(4);
//   lcd.setCursor(6, 1);
//   lcd.write(4);
//   lcd.setCursor(7, 1);
//   lcd.write(4);

// }