int j = 1;
int wait_time = 750;
String my_string = "j = ";

float pi = 3.14;
float r = 2;
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  area = pi * r * r;
  Serial.print("A circle with a radius ");
  Serial.print(r);
  Serial.print(" has an Area of ");
  Serial.print(area);
  Serial.println(".");

  r = r + 0.5;

  delay(wait_time);
}
