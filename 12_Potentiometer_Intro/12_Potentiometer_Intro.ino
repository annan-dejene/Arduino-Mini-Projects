int readPin = A3;
int readVal;
float Volt_reading;
int delay_time = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  Volt_reading = (5. / 1023.) * readVal;
  
  Serial.print("Potentiometer Voltage is ");
  Serial.println(Volt_reading);

  delay(delay_time);

}
