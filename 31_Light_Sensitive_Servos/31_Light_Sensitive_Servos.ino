#include <Servo.h>

int servo_pin = 9;
int light_pin = A4;

int light_value;
int servo_position;

Servo my_servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin, INPUT);
  pinMode(servo_pin, OUTPUT);

  my_servo.attach(servo_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_value = analogRead(light_pin);

  servo_position = map(light_value, 150, 600, 180, 0);
  // servo_position = (17460. - 18*light_value) / 95.; // light_va --> 20 - 970 and angle --> 180 - 0

  my_servo.write(servo_position);

}
