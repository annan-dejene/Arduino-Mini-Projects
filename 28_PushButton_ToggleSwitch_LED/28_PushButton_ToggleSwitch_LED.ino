int red_LED = 11;
int push_button = 3;

int delay_time = 100;

int LED_state = 0; // Assuming starting with off
int button_state_old; // We begin by not pressing. i.e 1
int button_state_new; // Where we'll record the state of the button in-real-time

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(push_button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state_new = digitalRead(push_button);

  if (button_state_old == 0 && button_state_new == 1){ // If we previously pressed it and now releasing it ----> Trigger toggle action
    if (LED_state == 0){
      digitalWrite(red_LED, HIGH);
      LED_state = 1;
    } else {
      digitalWrite(red_LED, LOW);
      LED_state = 0;
    }
  }

  button_state_old = button_state_new; // Updating the old state of the button

  delay(delay_time);

}
