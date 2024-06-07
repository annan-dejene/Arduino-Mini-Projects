int X_pin = A1;
int Y_pin = A0;
int switch_pin = 2;

int X_val;
int Y_val;
int switch_val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(X_pin, INPUT);
  pinMode(Y_pin, INPUT);
  pinMode(switch_pin, INPUT_PULLUP); 
  // INPUT_PULLUP to set the pin as INPUT and additionally use Arduino's internal resistor specifically as a pullup resistor 
}

void loop() {
  // put your main code here, to run repeatedly:
  X_val = analogRead(X_pin);
  Y_val = analogRead(Y_pin);

  switch_val = digitalRead(switch_pin);

  Serial.print("X value = ");
  Serial.print(X_val);
  Serial.print(" Y value = ");
  Serial.print(Y_val);
  Serial.print(" Switch state = ");
  Serial.println(switch_val);
}
