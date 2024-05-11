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

void loop() {
    if (analogRead(X_pin) == 0){
      tone(8, NOTE_C4, duration);
    }
    if (analogRead(Y_pin) == 0){
      tone(8, NOTE_G4, duration);
    }

    Serial.print("Switch:  ");
    Serial.print(digitalRead(SW_pin));
    Serial.print("\n");
    Serial.print("X-axis: ");
    Serial.print(analogRead(X_pin));
    Serial.print("\n");
    Serial.print("Y-axis: ");
    Serial.println(analogRead(Y_pin));
    Serial.print("\n\n");
    delay(1000);
}
