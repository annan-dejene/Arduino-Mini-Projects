const int digitalPin = 7;
const int analogPin = A0;
  qa
int digitalVal, analogVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(digitalPin, INPUT);
  pinMode(analogPin, INPUT);

  Serial.begin(9600);
}

void loop() { 

  analogVal = analogRead(analogPin);

  Serial.print("Digital: ");
  Serial.print(digitalVal);
  Serial.print(" Analog: ");
  Serial.println(analogVal);
}
