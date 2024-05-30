int red_LED = 9;
int potentiometer_pin = A2;

int delay_time = 100;

int read_val;
float brightness;


void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(potentiometer_pin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_val = analogRead(potentiometer_pin);
  Serial.println(read_val);

  delay(delay_time);

  while(read_val > 1000){
    digitalWrite(red_LED, HIGH);
    read_val = analogRead(potentiometer_pin);
    Serial.println(read_val);
    
    delay(delay_time);
  }

  digitalWrite(red_LED, LOW);

}
