#include <Servo.h>// include library

Servo myservo1;  // create myservo objects to control the servo
Servo myservo2;  
Servo myservo3;
Servo myservo4;

int pos1 = 0;    // variable to store the servo position
int pos2 = 0;    // variable to store the servo position
int pos3 = 0;    // variable to store the servo position
int pos4 = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo1.attach(6);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);  // attaches the servo on pin 6 to the servo object
  myservo3.attach(12);  // attaches the servo on pin 10 to the servo object
  myservo4.attach(11);  // attaches the servo on pin 11 to the servo object
  delay(100);
}

void loop() {
  zeroServos(); //set the servos to pos 0.
  
  for (pos1 = 0; pos1 <= 180; pos1 += 1) { //moves myservo1 from 0 degrees to 180 degrees
      // in steps of 1 degree
      Serial.println("ONE");
      Serial.println(pos1);
      myservo1.write(pos1);
      delay(5);
    }delay(50);            

   
  for (pos2 = 0; pos2 <= 180; pos2 += 1) { //moves myservo2 from 0 degrees to 180 degrees
      // in steps of 1 degree
      Serial.println("TWO");
      Serial.println(pos2);
      myservo2.write(pos2);
      delay(5);  
    }delay(50);   

               
  for (pos3 = 0; pos3 <= 180; pos3 += 1) { //moves myservo3 from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo3.write(pos3);
      delay(5);  
    }delay(50);
    
  for (pos4 = 0; pos4 <= 180; pos4 += 1) { //moves myservo4 from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo4.write(pos3);
      delay(5);  
    }delay(1000);
   
}
void zeroServos(){ // function sets all servos to zero
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
   delay(1000);
} 
