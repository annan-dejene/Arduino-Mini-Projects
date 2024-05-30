// if the switchState is LOW:
// turn the green LED on
// turn the red LEDs off
// if the switchState is HIGH:
// turn the green LED off
// turn the red LEDs on

int red_LED1 = 2;
int red_LED2 = 4;
int green_LED = 7;

int switch_state;
int switch_control = 8;

int delay_time = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED1, OUTPUT);
  pinMode(red_LED2, OUTPUT);
  pinMode(green_LED, OUTPUT);

  pinMode(switch_control, INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  switch_state = digitalRead(switch_control);

  Serial.println(switch_state);

  if (switch_state == 0){ // button not pressed
  
    digitalWrite(green_LED, HIGH);
    digitalWrite(red_LED1, LOW);
    digitalWrite(red_LED2, LOW);
  
  } else { // button is pressed
    digitalWrite(green_LED, LOW);
    digitalWrite(red_LED1, HIGH);
    digitalWrite(red_LED2, LOW);

    delay(delay_time);

    digitalWrite(green_LED, LOW);
    digitalWrite(red_LED1, LOW);
    digitalWrite(red_LED2, HIGH);

    delay(delay_time);

  }

}
