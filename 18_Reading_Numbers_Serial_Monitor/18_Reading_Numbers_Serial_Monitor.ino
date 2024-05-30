int my_number;

String message = "Please Enter your number: ";
String message2 = "Your number is ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(message);

  while(Serial.available() == 0){

  }

  my_number = Serial.parseInt();

  Serial.print(message2);
  Serial.println(my_number);

}
