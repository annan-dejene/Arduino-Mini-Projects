// Buzzer sounds when potentiometer reading is above 1000

int buzzer_pin = 6;
int potentiometer_pin = A5;

int read_val;


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);
  pinMode(potentiometer_pin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_val = analogRead(potentiometer_pin);

  Serial.println(read_val);

  if (read_val > 1000){
    digitalWrite(buzzer_pin, HIGH);
  } else {
    digitalWrite(buzzer_pin, LOW);
  }

}
