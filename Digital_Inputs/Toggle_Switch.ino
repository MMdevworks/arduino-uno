// Make single input button act as a toggle,s delay to prevent multi-toggle on single press

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;
bool toggle = false;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW) { 
    if (toggle == false) {
    digitalWrite(ledPin, HIGH);
    toggle = true;
  } else {
    digitalWrite(ledPin, LOW);
    toggle = false;
  }
  delay(200);
  }
}

