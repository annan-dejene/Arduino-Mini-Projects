// Color Mixing Lamp using RGB LED and 3 Photoresistors

int red_LED = 9;
int green_LED = 6;
int blue_LED = 6;

int red_val;
int green_val;
int blue_val;

int light_pin1 = A0;
int light_pin2 = A2;
int light_pin3 = A4;

int light_val1;
int light_val2;
int light_val3;

int delay_time = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);

  pinMode(light_pin1, INPUT);
  pinMode(light_pin2, INPUT);
  pinMode(light_pin3, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_val1 = analogRead(light_pin1);
  light_val2 = analogRead(light_pin2);
  light_val3 = analogRead(light_pin3);

  red_val = map(light_val1, 100, 700, 0, 255);
  green_val = map(light_val2, 100, 700, 0, 255);
  blue_val = map(light_val3, 100, 700, 0, 255);

  analogWrite(red_LED, red_val);
  analogWrite(green_LED, green_val);
  analogWrite(blue_LED, blue_val);

  delay(delay_time);
}