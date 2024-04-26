// Simple Circuit active buzzer tone:
// Morse Code - "Hello World"

int buzzer = 12; // pin of the active buzzer
int delay_short = 200;
int delay_long = 300;
int dash = 300;
int dot = 100;

void morse_dot() {
  digitalWrite(buzzer, HIGH);   // activate
  delay(dot);                   // Keep playing sound for
  digitalWrite(buzzer, LOW);    // deactivate
  delay(delay_short);           // delay before starting again
}

void morse_dash(){
  digitalWrite(buzzer, HIGH);
  delay(dash);
  digitalWrite(buzzer, LOW);
  delay(delay_short);
}

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
}

void loop() {

    // H: ....
    for (int i = 0; i < 4; i++) {
      morse_dot();
    }
    
    // E: .
    Serial.write('E');  
    delay(delay_short);
    morse_dot();
    delay(delay_long);

    // L: .-..
    for (int i = 0; i < 2; i++) {
      Serial.write('L');    
      morse_dot();
      morse_dash();
      morse_dot();
      morse_dot();
      delay(delay_short);
    }
    delay(delay_long);

    // O: ---
    for (int i = 0; i < 3; i++) {
      morse_dash();
    }
    delay(delay_long * 2);

    // W: .--
    morse_dot();
    morse_dash();
    morse_dash();
    delay(delay_long);

    // O: ---
    for (int i = 0; i < 3; i++) {
      morse_dash();
    }
    delay(delay_long);

    // R: .-.
    morse_dot();
    morse_dash();
    morse_dot();   
    delay(delay_long);

    // L: .-..
    morse_dot();
    morse_dash();
    morse_dot();
    morse_dot();
    delay(delay_long);

    // D: -..
    morse_dash();
    morse_dot();
    morse_dot();
    delay(delay_long * 4);
}