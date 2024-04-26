// Simple Circuit passive buzzer melody:
// "Ave Maria" utilizing pitch library

#include "pitches.h"

int melody[] = {
  NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C6, NOTE_E6, NOTE_G4, NOTE_C6, NOTE_E6,
  NOTE_D4, NOTE_F4, NOTE_A4, NOTE_D6, NOTE_F6, NOTE_A4, NOTE_D6, NOTE_F6,
  };
int duration = 200;  
 
void setup() {
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 16; thisNote++) {
    // tone(output pin, note, note duration)
    tone(8, melody[thisNote], duration);
    delay(400);
  }
