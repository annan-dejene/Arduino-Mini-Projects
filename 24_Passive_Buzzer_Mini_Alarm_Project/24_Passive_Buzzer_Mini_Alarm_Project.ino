int buzzer_pin = 6;

int delay_time = 500;

String message1 = "Set your password which you'll enter later to turn off the alarm: ";
String password;

String user_input;


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);

  Serial.begin(9600);

  Serial.println(message1);
  while (Serial.available() == 0){

  }
  password = Serial.readString();

  Serial.println("Password has been set! Use it to turn off the alarm.");
  Serial.println();

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() != 0){
    user_input = Serial.readString();

    if (user_input == password){
      Serial.println("Entered password is correct!");
      Serial.println("Alarm switched off");
      Serial.println("Type something to turn it back on.");
      Serial.println();

      // Switching the alarm off the correctly enter the password  
      while (Serial.available() == 0){
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

  digitalWrite(buzzer_pin, HIGH);
  delayMicroseconds(delay_time);
  digitalWrite(buzzer_pin, LOW);
  delayMicroseconds(delay_time);
}
