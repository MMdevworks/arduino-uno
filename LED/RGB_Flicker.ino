// RGB LED circuit - flicking flame lighting

#define GREEN 5
#define RED 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, HIGH);
}

int redValue;
int greenValue;
int count;

void loop()
{
#define delayTime 20

count = 10;
redValue = 255; 
greenValue = 20;

for(int i = 0; i < count; i += 1) 
{
redValue -= 5;
analogWrite(RED, redValue);
analogWrite(GREEN, greenValue);
delay(delayTime);
}
}