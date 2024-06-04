int red_LED = 11;
int push_button = 3;

int button_state;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(push_button, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  button_state = digitalRead(push_button);

  Serial.println(button_state);

  if (button_state == 1){ // not pressed
    digitalWrite(red_LED, LOW);
  } else { // pressed
    digitalWrite(red_LED, HIGH);
  }

}
