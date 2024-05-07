// Trigger pin is used to trigger the ultrasonic sound pulses. Echo pin produces a pulse when the reflected signal is received from distance object.
// Distance = (Time * Speed of Sound) / 2

// Led indicates when object distance is under 10cm
// Utilizes arduino SR04.h library

#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long dist;
const int redLED = 5;

void setup() {
   Serial.begin(9600);
   delay(1000);

   pinMode(redLED,OUTPUT);
   pinMode(dist,INPUT);
}

void loop() {
   dist = sr04.Distance();
   Serial.print(dist);
   Serial.println("cm");
   delay(1000);

   if (dist <= 10) {
      digitalWrite(redLED, HIGH);
      Serial.println("UNDER 10");
   } else {
      digitalWrite(redLED, LOW);
   }
}
