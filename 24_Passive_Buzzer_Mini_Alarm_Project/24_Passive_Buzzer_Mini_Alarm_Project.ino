int buzzer_pin = 6;

int delay_time = 500;

String message1 = "Set your password which you'll enter later to turn off the alarm: ";
String password;

String user_input;


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);

  Serial.begin(9600);

  // Start by asking the user to set a password
  Serial.println(message1);
  while (Serial.available() == 0){

  }
  password = Serial.readString();

  Serial.println("Password has been set! Use it to turn off the alarm.");
  Serial.println();

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() != 0){ // As soon as the user enters something on the serial monitor, we'll get into this if block
    user_input = Serial.readString();

    if (user_input == password){ // Check if what they typed is the same as the password set earlier. 
      Serial.println("Entered password is correct!");
      Serial.println("Alarm switched off");
      Serial.println("Type something to turn it back on.");
      Serial.println();

      // Switching the alarm off  
      while (Serial.available() == 0){//We're using a while loop here because as soon as they send something we want to get out of it and start the buzzing
        digitalWrite(buzzer_pin, LOW);
        delayMicroseconds(delay_time);
        digitalWrite(buzzer_pin, LOW);
        delayMicroseconds(delay_time);
      }
    
    } else {
      Serial.println("Entered password is not correct!");
      Serial.println("Alarm will not be switched off!");
      Serial.println();
    }
  }

  // If there is nothing sent through the serial monitor then the alarm will buzz annoyingly :)
  digitalWrite(buzzer_pin, HIGH);
  delayMicroseconds(delay_time);
  digitalWrite(buzzer_pin, LOW);
  delayMicroseconds(delay_time);
}
