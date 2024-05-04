// Tilt Ball 
// Turn on red LED on tilt

const int redLED = 5;

void setup()
{ 
  pinMode(redLED,OUTPUT);//initialize the redLED as an output
  pinMode(2,INPUT);
  digitalWrite(2, HIGH); 
} 

void loop() 
{  
  int digitalVal = digitalRead(2);
  if(HIGH == digitalVal)
  {
    digitalWrite(redLED,LOW);
  }
  else
  {
    digitalWrite(redLED,HIGH);
  }
}