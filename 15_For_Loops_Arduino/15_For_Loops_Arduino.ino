int red_LED = 9;
int yellow_LED = 6;

int red_delay = 500;
int yellow_delay = 500;

int yellow_blink = 3;
int red_blink = 5;

// int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(yellow_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (int j = 1; j <= yellow_blink; j = j + 1){
    digitalWrite(yellow_LED, HIGH);
    delay(yellow_delay);
    digitalWrite(yellow_LED, LOW);
    delay(yellow_delay);
  }
  

  for (int j = 1; j <= red_blink; j = j + 1){
    digitalWrite(red_LED, HIGH);
    delay(red_delay);
    digitalWrite(red_LED, LOW);
    delay(red_delay);
  }
}
