int LED = 9;
int brightest = 255;
int bright = 150;
int medium = 100;
int low = 50;
int lower = 20;
int off = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED, brightest);
  delay(1000);

  analogWrite(LED, bright);
  delay(1000);
  
  analogWrite(LED, medium);
  delay(1000);
  
  analogWrite(LED, low);
  delay(1000);

  analogWrite(LED, lower);
  delay(1000);

  analogWrite(LED, off);
  delay(1000);
  
}
