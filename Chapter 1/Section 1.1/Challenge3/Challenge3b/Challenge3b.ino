void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //tells the Arduino that pin 13 will be used as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, 1); //tells the Arduino to output power out of pin 13
  digitalWrite(12, 0); //tells the Arduino to stop outputting power out of pin 12
  digitalWrite(11, 0); //tells the Arduino to stop outputting power out of pin 11
  delay(1000); //tells the Arduino to wait for 1 second 
  digitalWrite(13, 0); //tells the Arduino to stop outputting power out of pin 13
  digitalWrite(12, 1); //tells the Arduino to output power out of pin 12
  digitalWrite(11, 0); //tells the Arduino to stop outputting power out of pin 11
  delay(1000); // tells the Arduino to wait for 1 second
  digitalWrite(13, 0); //tells the Arduino to stop outputting power out of pin 13
  digitalWrite(12, 0); //tells the Arduino to stop outputting power out of pin 12
  digitalWrite(11, 1); //tells the Arduino to output power out of pin 11
  delay(1000); // tells the Arduino to wait for 1 second
}
