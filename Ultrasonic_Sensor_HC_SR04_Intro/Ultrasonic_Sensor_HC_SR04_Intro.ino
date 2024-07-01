const int trigPin = 7;  
const int echoPin = 8; 

float duration, distance;

void setup() {
  // put your setup code here, to run once:

	pinMode(trigPin, OUTPUT);  
	pinMode(echoPin, INPUT);  
	Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // first set the trigPin low for 2 microseconds just to make sure that the pin in low first.
  digitalWrite(trigPin, LOW);  
	delayMicroseconds(2);  

  // set it high for 10 microseconds, which sends out an 8 cycle sonic burst from the transmitter, which then bounces of an object and hits the receiver(
	digitalWrite(trigPin, HIGH);  
	delayMicroseconds(10);  
	// set it back to low
  digitalWrite(trigPin, LOW);  

  /* the function does is waits for the pin to go whichever state you put in, starts timing, 
  and then stops timing when it switches to the other state. 
   In our case we would put HIGH since we want to start timing when the Echo pin goes high. 
   We will store the time in the duration variable. (It returns the time in microseconds)  */
  duration = pulseIn(echoPin, HIGH);

  /* since the pulseIn() function returns the time in microseconds, we will need to have a speed in microseconds also 
  It is .0343 cm/μS. ---> X = V * t
  To calculate the distance, just multiply the duration by .0343 and then divide it by 2(Because the sound waves travel to the object AND back).*/
  distance = (duration*.0343)/2;  

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  delay(100);
}
