int buzz_pin = 9;
int light_pin = A3;

int light_value;

int buzz_time;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz_pin, OUTPUT);
  pinMode(light_pin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  light_value = analogRead(light_pin);

  
  buzz_time = 1000 - (99. / 100.) * light_value;  // buzz_time = map(light_value, 0, 1000, 10, 1000);

  digitalWrite(buzz_pin, HIGH);
  delayMicroseconds(buzz_time);
  digitalWrite(buzz_pin, LOW);
  delayMicroseconds(buzz_time);
}
