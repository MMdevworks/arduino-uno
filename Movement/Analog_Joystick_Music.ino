// Analog Joystick Module
// Analog Joystick directional control of Passive Buzzer

#include "pitches.h"


const int SW_pin = 2; 
const int X_pin = A0; 
const int Y_pin = A1;

void setup() {

    pinMode(SW_pin, INPUT);
    digitalWrite(SW_pin, HIGH);
    Serial.begin(9600);
}