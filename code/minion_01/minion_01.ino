/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control Leg servo
Servo myservo2;  // create servo object to control Hip servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo1.attach(3);  // attaches the servo on pin 3 to the Leg servo object
  myservo2.attach(5);  // attaches the servo on pin 5 to the Hip servo object
}

void loop() {
//  myservo.write(90);
//  delay(1000);
  for (pos = 70; pos <= 110; pos += 1) // goes from 0 degrees to 180 degrees in steps of 1 degree
  {
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 80; pos <= 110; pos += 1) // goes from 0 degrees to 180 degrees in steps of 1 degree
  {
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 110; pos >= 70; pos -= 1) // goes from 180 degrees to 0 degrees
  {
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 110; pos >= 80; pos -= 1) // goes from 180 degrees to 0 degrees
  {
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

