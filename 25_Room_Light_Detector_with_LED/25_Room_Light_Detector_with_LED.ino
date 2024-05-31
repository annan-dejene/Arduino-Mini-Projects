int green_LED = 9;
int red_LED = 7;

int light_pin = A3;
int light_value; 

void setup() {
  // put your setup code here, to run once:
  pinMode(green_LED, OUTPUT);
  pinMode(red_LED, OUTPUT);
  pinMode(light_pin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_value = analogRead(light_pin);

  Serial.println(light_value);

  if (light_value > 250){
    digitalWrite(green_LED, HIGH);
    digitalWrite(red_LED, LOW);
  } else {
    digitalWrite(green_LED, LOW);
    digitalWrite(red_LED, HIGH);
  }
}
