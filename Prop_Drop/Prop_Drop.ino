/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo2; // twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

const int PIR = 4;

void setup()
{
  myservo.attach(9);
  myservo2.attach(10); // attaches the servo on pin 9 to the servo object
  pinMode(PIR, INPUT);
}

void loop()
{
  // if (digitalRead(PIR == HIGH) {
  myservo.write(0);
    myservo2.write(90);
    delay(1000);
    myservo.write(90);
    delay(3000);
    myservo.write(0);
    myservo2.write(0);
    delay(3000);
    myservo2.write(90);
  // }
}
