// Servo movement utilizing servo library
// 3 pass servo: 45/90/180 degrees

#include <Servo.h>

Servo myservo; 

int pos = 0;   
int deg1 = 45;
int deg2 = 90;
int deg3 = 180;
int delayTime = 5;

void setup() {
    Serial.begin(9600);
    myservo.attach(9);  // servo on pin 9
}

void loop() {
    // pass 1
    for (pos = 0; pos <= deg1; pos += 1) {
    myservo.write(pos); // servo moves to 'pos'
    delay(delayTime);                       
    }
    for (pos = deg1; pos >= 0; pos -= 1) { 
    myservo.write(pos);
    delay(delayTime);
    }

    // pass 2
    for (pos = 0; pos <= deg2; pos += 1) { 
    myservo.write(pos);             
    delay(delayTime);                       
    }
    for (pos = deg2; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(delayTime);                       
    }
    
    // pass 3
    for (pos = 0; pos <= deg3; pos += 1) { 
    myservo.write(pos);             
    delay(delayTime);                       
    }
    for (pos = deg3; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(delayTime);                       
    }
}
