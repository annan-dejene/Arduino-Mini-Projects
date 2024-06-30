const int buttonPin = 2;

const int ledPins[] = {6, 12, 11, 10, 9, 8, 7}; // define pins for 7-segment display (common cathode)

const int delay_time = 1000;

int digit = 0;
int buttonStateNew;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);

  for (int i = 0; i <= sizeof(ledPins) / sizeof(ledPins[0]); i++){
    pinMode(ledPins[i], OUTPUT); // Setting all LED pins as output
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonStateNew = digitalRead(buttonPin);

  if (buttonStateNew == 0 || digit > 9){ // button is pressed or counter for digit has reached 10 ----> reset it back
    digit = 0;
    delay(200);
  }

  // display current digit
  displayDigit(digit);
  digit++;

  delay(delay_time);
}

void displayDigit(int num) {
  // define segment patterns for each digit (common cathode)
  String segments[10] = {
    "1111110", // 0
    "0110000", // 1
    "1101101", // 2
    "1111001", // 3
    "0110011", // 4
    "1011011", // 5
    "1011111", // 6
    "1110000", // 7
    "1111111", // 8
    "1111011"  // 9
  };

  // turn off all segments initially
  for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
    digitalWrite(ledPins[i], LOW);
  }

  // light up corresponding segments for the digit
  for (int i = 0; i < sizeof(segments) / sizeof(segments[0]); i++) {
    if (segments[num][i] == '1' ) { // Check if the corresponding bit in segments[num] is high
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }

}