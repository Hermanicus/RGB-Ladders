

// the setup function runs once when you press reset or power the board
 int redPin = 9;
  int bluePin = 10;
  int greenPin = 11;
  int analogPin = 0; //Reads Pot setting 0-1024
  int val = 0;
  
void setup() {
  // initialize digital pin 13 as an output.
   pinMode(redPin, OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  val = analogRead(analogPin); // Value 0-1023
  Serial.println(val);
  int rainbowPos = val / 4;
 //Write R
 analogWrite(redPin,redNow);
 delay(100);
 analogWrite(redPin,0);
 delay(499);
 analogWrite(greenPin,255);
 delay(100);
  analogWrite(greenPin,0);
 delay(499);
 analogWrite(bluePin,255);
 delay(100);
 analogWrite(bluePin,0);
 delay(499);
}
