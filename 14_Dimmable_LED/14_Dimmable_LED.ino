int potentiometer_pin = A3;
int green_LED = 9;

int read_value;
// float read_voltage;

float brightness;

// int delay_time = 500;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(potentiometer_pin, INPUT);
  pinMode(green_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  read_value = analogRead(potentiometer_pin);
  // read_voltage = (5. / 1023.) * read_value;

  // Serial.print("Voltage is ");
  // Serial.println(read_voltage);

  brightness = (255. / 1023.) * read_value;

  // Serial.print("Brightness value is ");
  // Serial.println(brightness);

  analogWrite(green_LED, brightness);
}
