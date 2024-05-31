int light_pin = A3;
int light_value;


void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_value = analogRead(light_pin);

  Serial.println(light_value);
}
