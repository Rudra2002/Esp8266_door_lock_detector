#include <ESP8266WiFi.h>

const int inputPin = D1;   // Define the input pin connected to D1
const int ledPin = LED_BUILTIN; // Onboard LED pin

void setup() {
  pinMode(inputPin, INPUT_PULLUP); // Set D1 as input with pull-up resistor
  pinMode(ledPin, OUTPUT);         // Set LED pin as output
  digitalWrite(ledPin, LOW);      // Turn off the LED initially
}

void loop() {
  int inputValue = digitalRead(inputPin);

  if (inputValue == HIGH) {
    // D1 is connected to voltage, blink the LED
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    delay(500);                   // Wait for 500 milliseconds
    digitalWrite(ledPin, LOW);   // Turn off the LED
    delay(500);                   // Wait for 500 milliseconds
  }
  // If D1 is connected to ground (LOW), do nothing
}
