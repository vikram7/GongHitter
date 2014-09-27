// GongHitter
// by Vikram and Richard

#include <Servo.h>

int STEP = 5;
int DELAY = 500;
unsigned long TIME_BETWEEN_HITS = 3600000; // one hour

//1000 * 60 * 60 * 24;

Servo myservo;  // create servo object to control a servo
// a maximum of eight servo objects can be created

void moveMallet() {

  // move home
  myservo.write(90);
  delay(DELAY);

  myservo.write(0);
  delay(250);

  // strike
  myservo.write(90);
  delay(DELAY);

}

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  moveMallet();
  delay(TIME_BETWEEN_HITS);
}
