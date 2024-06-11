int tilt_switch_pin = 9;
int switch_state;

void setup() {
  // put your setup code here, to run once:
  pinMode(tilt_switch_pin, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch_state = digitalRead(tilt_switch_pin);

  if (switch_state == 1){
    Serial.println("Not connected");
  } else {
    Serial.println("Connected");
  }

  
}
