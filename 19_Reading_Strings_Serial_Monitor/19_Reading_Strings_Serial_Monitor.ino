String question = "What is your name? ";
String greeting1 = "Hello ";
String greeting2 = ", Welcome to Arduino!";

String name;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(question);

  while(Serial.available() == 0){

  }

  name = Serial.readString();

  Serial.print(greeting1);
  Serial.print(name);
  Serial.println(greeting2);

  Serial.println();

}
