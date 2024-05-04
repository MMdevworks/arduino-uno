// Trigger pin is used to trigger the ultrasonic sound pulses. Echo pin produces a pulse when the reflected signal is received from distance object.
// Distance = (Time * Speed of Sound) / 2

// Utilizing arduino SR04.h library

// Serial monitor indicates when object distance is under 10cm

#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600);
   delay(1000);
}

void loop() {
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   delay(1000);

   if (a <= 10):
   Serial.println("UNDER 10");

}
