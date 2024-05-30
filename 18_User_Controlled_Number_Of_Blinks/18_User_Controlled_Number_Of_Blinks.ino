int red_LED = 8;
int delay_time = 500;

int number_blinks;

String message = "Please Enter number of times to blink LED: ";

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(message);

  while(Serial.available() == 0){

  }

  number_blinks = Serial.parseInt();

  for(int j = 1; j <= number_blinks; j++){
    digitalWrite(red_LED, HIGH);
    delay(delay_time);
    digitalWrite(red_LED, LOW);
    delay(delay_time);
  }
}
