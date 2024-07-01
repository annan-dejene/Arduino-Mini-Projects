const int trigPin = 7;
const int echoPin = 8;

const int buzzPin = 5;
const int buzzTime = 500;

float duration, distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.0343) / 2;

  if (distance < 60){
    Serial.println("Intruder!");
    digitalWrite(buzzPin, HIGH);
    delay(buzzTime);
    digitalWrite(buzzPin, LOW);
  }
}
