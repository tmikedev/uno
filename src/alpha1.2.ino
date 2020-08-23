// Code used from Arduino.cc
// Modified for the UNO Project
// Fair use code
// Copyright 2020 T. Michael
int ledPin = 13;                // Dyn Channel #1
int genPin = 12;                // Dyn Channel #2

void setup()
{
  pinMode(ledPin, OUTPUT);      // sets the digital pin as output
  pinMode(genPin, OUTPUT);      // sets the digital pin as output
}

void loop()
{
  // Comments may not be accurate - Honest
  // Channel #1
  digitalWrite(genPin, HIGH);   // sets the LED off
  delay(750);                  // waits for a second
  digitalWrite(genPin, LOW);   // sets the LED off
  delay(500);                  // waits for a second
  digitalWrite(genPin, HIGH);   // sets the LED off
  delay(750);                  // waits for a second
  digitalWrite(genPin, LOW);   // sets the LED off
  delay(1000);
  // End of Channel #1
  // Channel #2
  digitalWrite(ledPin, HIGH);   // sets the LED off
  delay(500);                  // waits for a second
  digitalWrite(ledPin, LOW);   // sets the LED off
  delay(500);                  // waits for a second
  digitalWrite(ledPin, HIGH);   // sets the LED off
  delay(500);                  // waits for a second
  digitalWrite(ledPin, LOW);   // sets the LED off
  delay(500);                  // waits for a second
  digitalWrite(ledPin, HIGH);   // sets the LED off
  delay(500);                  // waits for a second
  digitalWrite(ledPin, LOW);   // sets the LED off
  delay(1000);
  // End of Channel #2
  

}