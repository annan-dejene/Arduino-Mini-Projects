const int sensorPin = A0;
const int sensorPower = 7;

int val;

const int redLED = 10;
const int greenLED = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPower, OUTPUT);
  pinMode(sensorPin, INPUT);
  
  // LEDs
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  // Set to LOW to ensure no power flows through the sensor
  digitalWrite(sensorPower, LOW);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Reading the sensor value
  digitalWrite(sensorPower, HIGH); // Turn sensor ON
  delay(10); // wait 10 ms
  val = analogRead(sensorPin); // Read the analog value from the sensor
  digitalWrite(sensorPower, LOW); // Turn the sensor OFF

  // Displaying the water level
  Serial.print("Water level: ");
  Serial.println(val);

  // Light the appropriate LED according to the water level
  if (val > 100){
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
  } else {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
  }

  delay(1000);
}
