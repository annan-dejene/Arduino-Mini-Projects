
int buzzer_pin = 6;

int buzz_time1 = 1;
int buzz_time2 = 90;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(buzzer_pin, HIGH);
  delayMicroseconds(buzz_time2);
  digitalWrite(buzzer_pin, LOW);
  delayMicroseconds(buzz_time2);

}
