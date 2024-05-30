/// RGB LED; user selected color

int blue_LED = 3;
int green_LED = 6;
int red_LED = 9;

int delay_time = 500;

String message = "What colour do you want?";
String color_choice;

void setup() {
  // put your setup code here, to run once:

  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(message);

  while(Serial.available() == 0){

  }

  color_choice = Serial.readString();

  if (color_choice == "red"){
      digitalWrite(red_LED, HIGH);
      digitalWrite(green_LED, LOW);
      digitalWrite(blue_LED, LOW);
      Serial.println("Red");
  } else if (color_choice == "green"){
      digitalWrite(red_LED, LOW);
      digitalWrite(green_LED, HIGH);
      digitalWrite(blue_LED, LOW);
      Serial.println("Green");
  } else if (color_choice == "blue"){
      digitalWrite(red_LED, LOW);
      digitalWrite(green_LED, LOW);
      digitalWrite(blue_LED, HIGH);
      Serial.println("Blue");
  } else if (color_choice == "off"){
      digitalWrite(red_LED, LOW);
      digitalWrite(green_LED, LOW);
      digitalWrite(blue_LED, LOW);
      Serial.println("Off");
  } else if (color_choice == "yellow"){
      digitalWrite(red_LED, HIGH);
      digitalWrite(green_LED, HIGH);
      digitalWrite(blue_LED, LOW);
      Serial.println("Yellow");
  } else if (color_choice == "aqua"){
      digitalWrite(red_LED, LOW);
      analogWrite(green_LED, 255);
      analogWrite(blue_LED, 80);
      Serial.println("Aqua");
  } else if (color_choice == "cyan"){
      digitalWrite(red_LED, LOW);
      analogWrite(green_LED, 255);
      analogWrite(blue_LED, 255);
      Serial.println("Cyan");
  } else if (color_choice == "magenta"){
      digitalWrite(red_LED, HIGH);
      analogWrite(green_LED, 0);
      analogWrite(blue_LED, 255);
      Serial.println("Magenta");
  } else if (color_choice == "orange"){
      digitalWrite(red_LED, HIGH);
      analogWrite(green_LED, 165);
      analogWrite(blue_LED, 0);
      Serial.println("Orange");
  } else if (color_choice == "fuchsia"){
      analogWrite(red_LED, 239);
      analogWrite(green_LED, 59);
      analogWrite(blue_LED, 124);
      Serial.println("Fchsia");
  } else if (color_choice == "white"){
      analogWrite(red_LED, 255);
      analogWrite(green_LED, 255);
      analogWrite(blue_LED, 255);
      Serial.println("White");
  } else {
    analogWrite(red_LED, 0);
    analogWrite(green_LED, 0);
    analogWrite(blue_LED, 0);
    Serial.println("Invalid Choice!");
  }

  Serial.println();
}
