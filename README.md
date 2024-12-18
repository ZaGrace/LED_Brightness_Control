# LED_Brightness_Control
Arduino project to control LED brightness using a potentiometer with LCD feedback
# LED Brightness Control with LCD Feedback

## Description
This project demonstrates how to control the brightness of an LED using a potentiometer and display the brightness level on a 1602 LCD. The potentiometer adjusts the brightness of the LED, while the brightness percentage is dynamically displayed on the LCD in real-time. This project is designed to be simple, educational, and a great introduction to Arduino-based analog and PWM control.

---

## Features
- Real-time LED brightness control using a potentiometer.
- Dynamic brightness percentage display on a 1602 LCD with I2C interface.
- Visual feedback of the LED brightness based on the potentiometer input.

---

## Components
1. **Arduino Uno R3 (Elegoo Uno)**
2. **1602 LCD with I2C Interface**
3. **Potentiometer (10kΩ)**
4. **LED (Any color)**
5. **220-ohm Resistor**
6. **Connecting Wires**
7. **Breadboard**

---

## Wiring Diagram
![Wiring Diagram](wiring-diagram.png)

### Key Connections:
1. **LCD**
   - VCC to 5V
   - GND to GND
   - SDA to A4
   - SCL to A5
2. **Potentiometer**
   - One outer pin to 5V
   - The other outer pin to GND
   - Middle pin to A0
3. **LED**
   - Long end (anode) connected to 220-ohm resistor and then to PWM pin 9
   - Short end (cathode) connected to GND

---

## Code
The code for this project is included in the repository as `LED_Brightness_Control.ino`. It uses the following Arduino libraries:
- **Wire.h**
- **LiquidCrystal_I2C.h**

---

## How It Works
1. The potentiometer outputs an analog voltage read by pin A0.
2. The Arduino calculates the LED brightness percentage based on the potentiometer value (0-1023).
3. A PWM signal adjusts the LED brightness via pin 9.
4. The brightness percentage is displayed on the LCD.

---

## Setup Instructions
1. Wire the components as shown in the diagram.
2. Install the required libraries (`LiquidCrystal_I2C`) in the Arduino IDE.
3. Upload the `LED_Brightness_Control.ino` sketch to the Arduino Uno.
4. Adjust the potentiometer to see the LED brightness change and the brightness percentage update on the LCD.

---

## License
This project is licensed under the MIT License. See the `LICENSE` file for more details.

---

## Acknowledgments
- Special thanks to the Arduino community for resources and guidance.
- Wiring corrections based on practical testing to ensure accuracy.

---

## Troubleshooting
1. **LCD Not Displaying Text:**
   - Check I2C address. Use an I2C scanner sketch to confirm.
2. **LED Not Lighting Up:**
   - Verify the polarity of the LED.
   - Ensure the resistor is correctly connected.
3. **Brightness Not Changing:**
   - Check potentiometer wiring to A0.
   - Ensure proper connections to 5V and GND.

For further assistance, please create an issue in this repository.

