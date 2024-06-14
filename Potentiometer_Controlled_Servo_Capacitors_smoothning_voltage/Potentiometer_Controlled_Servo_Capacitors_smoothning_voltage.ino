#include <Servo.h>

int servo_pin = 9;
int potentiometer_pin = A1;

int potentiometer_val;
int servo_angle;

Servo my_servo;

void setup() {
  // put your setup code here, to run once:

  pinMode(servo_pin, OUTPUT);
  pinMode(potentiometer_pin, INPUT);

  my_servo.attach(servo_pin);

  Serial.begin(9600);

}

void loop() {
  // put your main code here to run repeatedly:

  potentiometer_val = analogRead(potentiometer_pin);

  servo_angle = map(potentiometer_val, 0, 1023, 0, 180);

  my_servo.write(servo_angle);

  delay(50);

}
