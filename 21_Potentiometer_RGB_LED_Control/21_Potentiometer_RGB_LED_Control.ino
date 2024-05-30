/// RGB LED; with potentiomenter

int blue_LED = 3;
int green_LED = 6;
int red_LED = 9;

int potentiometer_pin = A4;
int read_value;
int brightness;

String message = "Which colour do you want to control with the potentiometer (red, green or blue)?";
String color_choice;

void setup() {
  // put your setup code here, to run once:
  pinMode(blue_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(red_LED, OUTPUT);

  pinMode(potentiometer_pin, INPUT);


  Serial.begin(9600);


  // Ask user which color they want to control at startup
  Serial.println(message);
  
  while(Serial.available() == 0){

  }

  color_choice = Serial.readString();

  if (color_choice == "blue"){
    Serial.println("You'll control the Blue LED.");
  } else if (color_choice == "green"){
    Serial.println("You'll control the Green LED.");
  } else if (color_choice == "red"){
    Serial.println("You'll control the Red LED.");
  } else {
    Serial.print(color_choice);
    Serial.println(" is an invalid choice! Please try again!");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (Serial.available() != 0){
    color_choice = Serial.readString();
    if (color_choice == "blue" || color_choice == "green" || color_choice == "red"){
      Serial.println();
      Serial.print("Control LED changed to ");
      Serial.print(color_choice);
      Serial.println(" successfully!");
      Serial.println();
    } else {
      Serial.print(color_choice);
      Serial.println(" is an invalid choice! Please try again!");
      Serial.println();
    }
  }

  read_value = analogRead(potentiometer_pin);
  brightness = map(read_value, 0, 1023, 0, 255); // brightness = (255. / 1023.) * read_value;

  if (color_choice == "blue"){
    analogWrite(blue_LED, brightness);
    analogWrite(green_LED, 255);
    analogWrite(red_LED, 255);
  } else if (color_choice == "green"){
    analogWrite(blue_LED, 255);
    analogWrite(green_LED, brightness);
    analogWrite(red_LED, 255);
  } else if (color_choice == "red"){
    analogWrite(blue_LED, 255);
    analogWrite(green_LED, 255);
    analogWrite(red_LED, brightness);
  } else {
    analogWrite(blue_LED, 0);
    analogWrite(green_LED, 0);
    analogWrite(red_LED, 0);
  }

}