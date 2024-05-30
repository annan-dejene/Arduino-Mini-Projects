int readPin = A3;
int readVal;
float Volt_reading;
int delay_time = 500;

int redLED = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  Volt_reading = (5. / 1023.) * readVal;
  
  Serial.print("Potentiometer Voltage is ");
  Serial.println(Volt_reading);

  // if (Volt_reading >= 4.0){
  //   digitalWrite(redLED, HIGH);
  // }

  // if (Volt_reading < 4.0){
  //   digitalWrite(redLED, LOW);
  // }

  if (Volt_reading > 2 && Volt_reading < 3){
    digitalWrite(redLED, HIGH);
  } else {
    digitalWrite(redLED, LOW);
  }

  delay(delay_time);

}
