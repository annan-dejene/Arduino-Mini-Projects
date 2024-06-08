int buzz_pin = 6;
int light_pin = A2;

int light_val;

int light_low = 1023;
int light_high = 0;

int LED_pin = 13;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  // Using the built-in LED as a calibration indicator
  pinMode(LED_pin, OUTPUT);
  digitalWrite(LED_pin, HIGH);

  // Run the code for 5 seconds after arduino is powered on for calibrating the high and low light values

  while (millis() < 10000){
    light_val = analogRead(light_pin);

    if (light_val > light_high){
      light_high = light_val;
    } else if (light_val < light_low){
      light_low = light_val;
    }

    Serial.print("Light low = ");
    Serial.print(light_low);
    Serial.print(" Light high = ");
    Serial.println(light_high);
  }

  // Turn of built-in LED to indicate end of calibration
  digitalWrite(LED_pin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  light_val = analogRead(light_pin);

  int pitch = map(light_val, light_low, light_high, 50, 4000);

  tone(buzz_pin, pitch, 20);

  delay(10);

}