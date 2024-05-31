int buzzer_pin = 6;

int delay_time1 = 1;
int delay_time2 = 3;

int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // First tone with delay_time_1
  for (j=1; j <= 100; j++){
    digitalWrite(buzzer_pin, HIGH);
    delay(delay_time1);
    digitalWrite(buzzer_pin, LOW);
    delay(delay_time1);
  }

  // Second tone with delay_time_2
  for (j=1; j <= 100; j++){
    digitalWrite(buzzer_pin, HIGH);
    delay(delay_time2);
    digitalWrite(buzzer_pin, LOW);
    delay(delay_time2);
  }

}
