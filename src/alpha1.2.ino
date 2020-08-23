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
  // Corrected Comments 10:03AM 8/23/2020
  // Channel #1
  digitalWrite(genPin, HIGH); // Sets Dyn. Channel 1 LED On
  delay(750);                 
  digitalWrite(genPin, LOW);  // Sets Dyn. Channel 1 LED Off
  delay(500);                 
  digitalWrite(genPin, HIGH); // Sets Dyn. Channel 1 LED On
  delay(750);                 
  digitalWrite(genPin, LOW);  // Sets Dyn. Channel 1 LED Off
  delay(1000);
  // End of Channel #1
  // Channel #2
  digitalWrite(ledPin, HIGH);  // Sets Dyn. Channel 1 LED On
  delay(500);                  
  digitalWrite(ledPin, LOW);   // Sets Dyn. Channel 1 LED Off
  delay(500);                  
  digitalWrite(ledPin, HIGH);  // Sets Dyn. Channel 1 LED On
  delay(500);                  
  digitalWrite(ledPin, LOW);   // Sets Dyn. Channel 1 LED Off
  delay(500);                  
  digitalWrite(ledPin, HIGH);  // Sets Dyn. Channel 1 LED On
  delay(500);                  
  digitalWrite(ledPin, LOW);   // Sets Dyn. Channel 1 LED Off
  delay(1000);
  // End of Channel #2
  

}