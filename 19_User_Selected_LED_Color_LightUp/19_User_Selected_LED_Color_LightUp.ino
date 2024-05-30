int green_LED = 2;
int yellow_LED = 7;
int red_LED = 10;

String question = "Choose which LED you want to light up (green, yellow, red): ";
String choice;

void setup() {
  // put your setup code here, to run once:
  pinMode(green_LED, OUTPUT);
  pinMode(yellow_LED, OUTPUT);
  pinMode(red_LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(question);

  while(Serial.available() == 0){

  }

  choice = Serial.readString();

  if (choice == "green" || choice == "Green"){
    digitalWrite(green_LED, HIGH);
    digitalWrite(yellow_LED, LOW);
    digitalWrite(red_LED, LOW);
    Serial.println("Green LED Selected to light up.");
  } else if (choice == "yellow" || choice == "Yellow"){
    digitalWrite(green_LED, LOW);
    digitalWrite(yellow_LED, HIGH);
    digitalWrite(red_LED, LOW);
    Serial.println("Yellow LED Selected to light up.");
  } else if (choice == "red" || choice == "Red"){
    digitalWrite(green_LED, LOW);
    digitalWrite(yellow_LED, LOW);
    digitalWrite(red_LED, HIGH);
    Serial.println("Red LED Selected to light up.");
  } else {
    digitalWrite(green_LED, LOW);
    digitalWrite(yellow_LED, LOW);
    digitalWrite(red_LED, LOW);

    Serial.println("Invalid Choice, Please try again!");
  }

  Serial.println();
}
