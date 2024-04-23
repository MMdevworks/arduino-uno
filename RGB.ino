// RGB LED circuit - Red/Blue siren type lighting

#define BLUE 3
#define RED 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(BLUE, LOW);
}

int redValue;
int blueValue;

void loop()
{
// fading time between colors
#define delayTime 1 

// choose a value between 1 and 255 to change the color.
redValue = 255; 
blueValue = 0;

// fades out red bring blue full when i=255
for(int i = 0; i < 255; i += 1) 
{
redValue -= 1;
blueValue += 1;
analogWrite(RED, redValue);
analogWrite(BLUE, blueValue);
delay(delayTime);
}

redValue = 0;
blueValue = 255;

// fades out blue bring red full when i=255
for(int i = 0; i < 255; i += 1) 
{
blueValue -= 1;
redValue += 1;
analogWrite(BLUE, blueValue);
analogWrite(RED, redValue);
delay(delayTime);
}
}