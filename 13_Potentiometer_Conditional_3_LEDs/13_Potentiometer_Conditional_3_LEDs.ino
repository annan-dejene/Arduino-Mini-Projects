// This code will use the voltage supplied by the middle terminal of a potentiometer after manipulating its resistance by turning the knob
// To light up one of the three LEDs; GREEN, YELLOW AND RED 
// according to the following rule
// Voltage <= 3 --> Green
// 3 < Voltage < 4 --> Yellow
// Voltage >= 4 --> Green


int potentiometer_reading = A3;
int read_value;
float volt_reading;

int red_pin = 6;
int yellow_pin = 7;
int green_pin = 8;

int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(potentiometer_reading, INPUT);

  pinMode(red_pin, OUTPUT);
  pinMode(yellow_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  read_value = analogRead(potentiometer_reading);
  volt_reading = (5. / 1023.) * read_value;

  Serial.print("The voltage reading is ");
  Serial.println(volt_reading);

  if (volt_reading <= 3.0){
    digitalWrite(green_pin, HIGH);
    digitalWrite(yellow_pin, LOW);
    digitalWrite(red_pin, LOW);
  } else if (volt_reading > 3 && volt_reading < 4){
    digitalWrite(green_pin, LOW);
    digitalWrite(yellow_pin, HIGH);
    digitalWrite(red_pin, LOW);
  } else {
    digitalWrite(green_pin, LOW);
    digitalWrite(yellow_pin, LOW);
    digitalWrite(red_pin, HIGH);
  }

  delay(delay_time);
}
