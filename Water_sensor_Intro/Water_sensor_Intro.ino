const int sensorPin = A0;
const int sensorPower = 7;

int val;


void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPower, OUTPUT);
  pinMode(sensorPin, INPUT);

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

  delay(1000);
}
