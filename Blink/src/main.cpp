// File : main.cpp

#include <Arduino.h>

#define LED_BUILTIN 2

void setup() {

   // initialize digital pin LED_BUILTIN as an output.
   pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600);

}

// the loop function runs over and over again forever
void loop() {

   Serial.println("LED ON");
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second

   Serial.println("LED OFF");
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second
  
}
