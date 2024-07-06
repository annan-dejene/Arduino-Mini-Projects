#include <Stepper.h>

int stepsPerRev = 2048;
int motSpeed = 10; // 10 RPM (10 revolutions per minute) --> It finishes one complete revolution in 6 seconds and 10 rev in 1 min (60 secs)

int delay_time = 500;

Stepper myStepper(stepsPerRev, 8, 9, 10, 11);

int pushButton = 7;
int buttonStateNew = 1;
int buttonStateOld = 1;

int revolutionDirection = 1; // 1 --> Clockwise. 0 --> Counter Clockwise


void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed);

  pinMode(pushButton, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonStateNew = digitalRead(pushButton);

  if ((buttonStateNew == 0) && (buttonStateOld == 1)){ // button has been pressed so toggling action
    if (revolutionDirection == 1){
      revolutionDirection = -1;
    } else {
      revolutionDirection = 1;
    }
  }

  myStepper.step(revolutionDirection * 1); // direction to either CW or CCW depending on sign, and 1 step at a time

  buttonStateOld = buttonStateNew;
}
