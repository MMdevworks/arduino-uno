// Tilt Ball 


// Two button On/Off

int ledPin = 5;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(2,INPUT);
  digitalWrite(2, HIGH); 
 
}

void loop() 
{

  int digitalVal = digitalRead(2);
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW);//turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn the led on
  }

//   if (digitalRead(buttonApin) == LOW)
//   {
//     digitalWrite(ledPin, HIGH);
//   }
//   if (digitalRead(buttonBpin) == LOW)
//   {
//     digitalWrite(ledPin, LOW);
//   }
}



// const int ledPin = 13;//the led attach to

// void setup()
// { 
//   pinMode(ledPin,OUTPUT);//initialize the ledPin as an output
//   pinMode(2,INPUT);
//   digitalWrite(2, HIGH); 
// } 
// /******************************************/
// void loop() 
// {  
//   int digitalVal = digitalRead(2);
//   if(HIGH == digitalVal)
//   {
//     digitalWrite(ledPin,LOW);//turn the led off
//   }
//   else
//   {
//     digitalWrite(ledPin,HIGH);//turn the led on 
//   }
// }