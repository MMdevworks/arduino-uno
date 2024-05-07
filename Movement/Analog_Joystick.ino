// Analog Joystick Module
// Analog Joystick directional control of RGB led

#define BLUE 3
#define GREEN 5
#define RED 9

const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1; // analog pin connected to Y output

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

int redValue;
int greenValue;
int blueValue;

void loop() {

  if (analogRead(X_pin) < 400) { 
    for(int i = 0; i < 255; i += 1) {
      redValue -= 1;
      blueValue += 1;
      analogWrite(RED, redValue);
      analogWrite(BLUE, blueValue);
    }
  }
  
  if (analogRead(X_pin) > 500){ 
    for(int i = 0; i < 255; i += 1) {
      blueValue -= 1;
      greenValue += 1;
      analogWrite(BLUE, blueValue);
      analogWrite(GREEN, greenValue);
    }
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
