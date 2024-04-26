// Simple Circuit active buzzer tone:
// Morse Code - "Hello World"

int buzzer = 12; //the pin of the active buzzer

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); //initialize the buzzer pin as an output
}

void loop() {
int delay_short = 400;
int delay_long = 600;
int dash = 300;
int dot = 100;
bool played = false;

  if (!played) {
    Serial.write('H');  // ....
    for (int i = 0; i < 4; i++) {
      digitalWrite(buzzer, HIGH);   // activate
      delay(dot);                   // Keep playing sound for
      digitalWrite(buzzer, LOW);    // deactivate
      delay(delay_short);           // delay before starting again
    }

    Serial.write('E');  // .
    digitalWrite(buzzer, HIGH);
    delay(dot);   
    digitalWrite(buzzer, LOW);   
    delay(delay_long);

    for (int i = 0; i < 2; i++) {
      Serial.write('L');    // .-..
      digitalWrite(buzzer, HIGH);
      delay(dot);
      digitalWrite(buzzer, LOW);
      delay(delay_short);

      digitalWrite(buzzer, HIGH);
      delay(dash);
      digitalWrite(buzzer, LOW);
      delay(delay_short);
    
      digitalWrite(buzzer, HIGH);
      delay(dot);
      digitalWrite(buzzer, LOW);
      delay(delay_short);

      digitalWrite(buzzer, HIGH);
      delay(dot);
      digitalWrite(buzzer, LOW);
      delay(delay_short);
    }

    Serial.write('O');   // ---
    for (int i = 0; i < 3; i++) {
      digitalWrite(buzzer, HIGH);
      delay(dash);
      digitalWrite(buzzer, LOW);
      delay(delay_short);
    }
  }
}