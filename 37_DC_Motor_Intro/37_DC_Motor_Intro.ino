// DC Motor Intro

int speed_pin = 9;
int direction_pin1 = 3;
int direction_pin2 = 6;

int motor_speed = 65; // 0 - completely off and 255 -> completely on


void setup() {
  // put your setup code here, to run once:

  pinMode(speed_pin, OUTPUT);
  pinMode(direction_pin1, OUTPUT);
  pinMode(direction_pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // direction --> By alternating the HIGH and LOW, we can get it to rotate either in clockwise or counter clockwise
  digitalWrite(direction_pin1, LOW);
  digitalWrite(direction_pin2, HIGH);
  
  // Turn it on --> Set a speed
  analogWrite(speed_pin, motor_speed);
}
