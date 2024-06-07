int X_pin = A1;
int Y_pin = A0;

int X_val;
int Y_val;

int red_LED = 9;
int yellow_LED = 6;

int red_val;
int yellow_val;

void setup() {
  // put your setup code here, to run once:
  
  // Joystick
  pinMode(X_pin, INPUT);
  pinMode(Y_pin, INPUT);
  // LED
  pinMode(red_LED, OUTPUT);
  pinMode(yellow_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Reading Joystick vals
  X_val = analogRead(X_pin);
  Y_val = analogRead(Y_pin);

  // Mapping Joystick values to LED values for analogWrite
  red_val = map(X_val, 0, 1023, 0, 255);
  yellow_val = map(Y_val, 0, 1023, 0, 255);

  // Sending to the LEDs connected with PWM pins using analogWrite
  analogWrite(red_LED, red_val);
  analogWrite(yellow_LED, yellow_val);
  
}
