int buzzer_pin = 6;
int potentiometer_pin = A3;

int read_val;
int buzz_time;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);
  pinMode(potentiometer_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_val = analogRead(potentiometer_pin);
  buzz_time = map(read_val, 0, 1023, 10, 10000);

  digitalWrite(buzzer_pin, HIGH);
  delayMicroseconds(buzz_time);
  digitalWrite(buzzer_pin, LOW);
  delayMicroseconds(buzz_time);

}
