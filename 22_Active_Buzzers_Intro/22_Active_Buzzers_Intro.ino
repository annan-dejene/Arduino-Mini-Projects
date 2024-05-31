int buzzer_pin = 6;
int delay_time = 2000;

int num;

String message = "Enter a number: ";


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(message);

  while (Serial.available() == 0){

  }

  num = Serial.parseInt();

  if (num > 10){
    digitalWrite(buzzer_pin, HIGH);
    delay(delay_time);
    digitalWrite(buzzer_pin, LOW);
  }

  Serial.println();
} 
