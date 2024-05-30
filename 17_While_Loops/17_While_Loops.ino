int j;
int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  j = 1;

  while(j <= 10){
    Serial.println(j);
    j++;
    
    delay(delay_time);
  }

  Serial.println();

}
