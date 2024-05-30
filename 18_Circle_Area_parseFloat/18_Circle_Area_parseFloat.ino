float pi = 3.14;
float radius;
float area;

String message = "Enter the radius of the circle: ";
String message2 = "The radius of the circle is ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(message);
  
  while(Serial.available() == 0){

  }

  radius = Serial.parseFloat();
  area = pi * radius * radius;

  Serial.print(message2);
  Serial.println(area);

  Serial.println();

}
