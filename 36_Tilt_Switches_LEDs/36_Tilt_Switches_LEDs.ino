int red_LED = 6;
int green_LED = 12;

int tilt_switch_pin = 9;
int switch_state;

int delay_time = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(tilt_switch_pin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch_state = digitalRead(tilt_switch_pin);

  if (switch_state == 1){ // Not connected
    digitalWrite(red_LED, HIGH);
    digitalWrite(green_LED, LOW);
  } else { // Connected
    digitalWrite(red_LED, LOW);
    digitalWrite(green_LED, HIGH);
  }

  delay(delay_time);
}
