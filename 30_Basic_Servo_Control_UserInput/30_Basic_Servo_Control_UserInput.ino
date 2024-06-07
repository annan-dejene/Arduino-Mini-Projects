#include <Servo.h>

int servo_pin = 9;
int servo_position;

Servo my_servo; // modeling our virtual servo for the program

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  my_servo.attach(servo_pin); // telling it this is the control pin

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Enter angle to move servo to: "); // Ask
  
  while (Serial.available() == 0){ // Wait

  }

  servo_position = Serial.parseInt(); // Read
  Serial.println(servo_position);

  my_servo.write(servo_position); // Send data
}
