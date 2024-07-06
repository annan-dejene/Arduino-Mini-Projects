#include <Stepper.h>

int stepsPerRev = 2048;
int motSpeed = 10;

int delay_time = 1000;

Stepper myStepper(stepsPerRev, 8, 9, 10, 11);

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(stepsPerRev);
  delay(delay_time);
  myStepper.step(-stepsPerRev);
  delay(delay_time);
}
