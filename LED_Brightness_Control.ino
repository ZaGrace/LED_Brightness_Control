#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD (I2C address, columns, rows)
LiquidCrystal_I2C lcd(0x27, 16, 2); // Replace 0x27 with your LCD's I2C address if necessary

// Define pins
const int potPin = A0; // Potentiometer connected to A0
const int ledPin = 9;  // LED connected to D9 (PWM pin)

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600);      // Initialize Serial Monitor
  
  lcd.begin(16, 2);        // Initialize the LCD with 16 columns and 2 rows
  lcd.backlight();         // Turn on the backlight
  lcd.setCursor(0, 0);
  lcd.print("Brightness:"); // Initial text on LCD
}

void loop() {
  int potValue = analogRead(potPin); // Read potentiometer value (0-1023)
  int brightness = map(potValue, 0, 1023, 0, 255); // Map to PWM range (0-255)

  analogWrite(ledPin, brightness); // Adjust LED brightness
  
  // Print brightness level to Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(" | LED Brightness: ");
  Serial.println(brightness);
  
  // Update LCD display
  lcd.setCursor(0, 1);             // Set cursor to the second line
  lcd.print("Level: ");            // Display "Level:"
  lcd.print(brightness);           // Display brightness level
  lcd.print("    ");               // Clear remaining characters
  
  delay(100); // Small delay for stability
}
