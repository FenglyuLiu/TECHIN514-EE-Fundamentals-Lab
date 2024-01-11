#include <Arduino.h>

constexpr int analogPin = D1; // Define D1 as your analog pin. Ensure D1 is ADC capable.

void setup() {
  Serial.begin(115200); // Start serial communication at 115200 baud
}

void loop() {
  unsigned int ADC_Value = analogRead(analogPin); // Read the analog value from D1
  float voltage = (ADC_Value / 4095.0) * 3.3; // Convert that value to a voltage
  Serial.printf("Voltage: %.2f V\n", voltage); // Print the voltage
  delay(1000); // Wait for a second
}