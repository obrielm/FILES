#include <Servo.h>

Servo MY_BLDC; // create servo object to control a BLDC via ESC

int potentiometer_pin = 0; // analog pin used to connect the potentiometer

int val; // variable to read the value from the analog pin

void setup() {

MY_BLDC.attach(9); // attaches the ESC on pin 9 to the servo object

}

void loop() {

val = analogRead(potentiometer_pin); // reads the value of the potentiometer (value between 0 and 1023)

val = map(val, 0, 1023, 0, 255);

MY_BLDC.write(val); // sets the BLDC throttle according to the scaled value

}

