// Single button multi-function light:
// Stage 1 - On
// Stage 2 - Flashing
// Stage 3 - Off

int ledPin = 5;
int buttonApin = 9;
int state = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW) {         // If button is pressed
    if (state == 0) {                           // State 0: LED On and move to the next state
    digitalWrite(ledPin, HIGH);
    state += 1;                                 
    delay(200);
  } else if (state == 1) {
    while(state == 1) {                         // While State 1: flash with 100ms delay
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(100);
      if (digitalRead(buttonApin) == LOW) {    // If the button is pressed: break loop, turn off, increment state
        digitalWrite(ledPin, LOW);
        state += 1;
      }
    }
  } else {
      digitalWrite(ledPin, LOW);
      state = 0;                               // Reset to initial state
      delay(200);                              // debounce button press - (prevent multipress on single action)
    }
  }
}
