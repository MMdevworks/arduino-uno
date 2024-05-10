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
    digitalWrite(RED, LOW);
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

    if (analogRead(X_pin) < 500){
        greenValue = 0;
        blueValue = analogRead(X_pin)/5;
        redValue = analogRead(Y_pin)/5;
    }
    else if(analogRead(X_pin) > 500){
        blueValue = analogRead(X_pin)/5;;
        greenValue = 0;
        redValue = analogRead(Y_pin)/5;
    }
    else if(analogRead(X_pin) > 400 && analogRead(Y_pin) > 500){
        blueValue = 0;
        greenValue = 255;
        redValue = analogRead(Y_pin) / 5;
    }

    analogWrite(RED, redValue);
    analogWrite(BLUE, blueValue);
    analogWrite(GREEN, greenValue);

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
