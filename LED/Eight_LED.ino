// Control 8 LEDs without 8 inputs
// 74HC595 Serial to Parallel Converter

// Example:
// int tDelay = 100;
// int latchPin = 11;      
// int clockPin = 9;      
// int dataPin = 12;     

// byte leds = 0;

// void updateShiftRegister()
// {
//    digitalWrite(latchPin, LOW);
//    shiftOut(dataPin, clockPin, LSBFIRST, leds);
//    digitalWrite(latchPin, HIGH);
// }

// void setup() 
// {
//   pinMode(latchPin, OUTPUT);
//   pinMode(dataPin, OUTPUT);  
//   pinMode(clockPin, OUTPUT);
// }

// void loop() 
// {
//   leds = 0;
//   updateShiftRegister();
//   delay(tDelay);
//   for (int i = 0; i < 8; i++)
//   {
//     bitSet(leds, i);
//     updateShiftRegister();
//     delay(tDelay);
//   }
// }
