int red_LED = 11;
int push_button1 = 3;
int push_button2 = 8;
int buzzer_pin = 2;

int brightness = 0;
int brightness_change = 10;

int delay_time_buzzer = 500;

int push_button1_value;
int push_button2_value;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
  pinMode(push_button1, INPUT);
  pinMode(push_button2, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  push_button1_value = digitalRead(push_button1);
  push_button2_value = digitalRead(push_button2);


  if (push_button1_value == 0){ // button 1 pressed
    brightness = brightness + brightness_change;
  }

  if (push_button2_value == 0){ // button 2 pressed
    brightness = brightness - brightness_change;
  }

  if (brightness > 255){ // if value of brightness goes over 255 we set it to 255
    brightness = 255;
    // giving a warning with the buzzer
    digitalWrite(buzzer_pin, HIGH);
    delay(delay_time_buzzer);
    digitalWrite(buzzer_pin, LOW);
  }

  if (brightness < 0){ // if value of brightness goes below 0 we set it back to 0
    brightness = 0;
    digitalWrite(buzzer_pin, HIGH);
    // giving a warning with the buzzer
    digitalWrite(buzzer_pin, HIGH);
    delay(delay_time_buzzer);
    digitalWrite(buzzer_pin, LOW);
  }

  analogWrite(red_LED, brightness);

  Serial.print("Button 1 = "); Serial.print(push_button1_value); Serial.print(" Button 2 = "); Serial.print(push_button2_value); Serial.print(" Brightness = "); Serial.println(brightness);

}
