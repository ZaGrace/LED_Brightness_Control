# LED Brightness Control with Potentiometer and LCD

This project demonstrates how to control the brightness of an LED using a potentiometer, with real-time feedback displayed on a 16x2 LCD screen using the I2C protocol. The project is simple to set up and is ideal for learning about analog input, PWM output, and I2C communication.

---

## Table of Contents
- [Project Overview](#project-overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Circuit Diagram](#circuit-diagram)
- [Setup and Usage](#setup-and-usage)
- [Code Explanation](#code-explanation)
- [Credits](#credits)
- [Future Improvements](#future-improvements)
- [License](#license)

---

## Project Overview

In this project, an LED's brightness is adjusted using a potentiometer, and the brightness level is displayed on an LCD screen. The potentiometer provides an analog input (0–1023), which is mapped to a PWM output (0–255) to control the LED's brightness. The LCD screen, connected via I2C, provides real-time feedback on the brightness level.

---

## Features
- Adjustable LED brightness using a potentiometer.
- Real-time brightness display on a 16x2 LCD screen via I2C.
- Serial monitor output for debugging and monitoring potentiometer values and brightness levels.

---

## Hardware Requirements
- Arduino Uno (or any compatible microcontroller)
- 16x2 LCD screen with an I2C module
- Potentiometer (10kΩ recommended)
- LED
- 220Ω Resistor (for LED)
- Breadboard and jumper wires

---

## Software Requirements
- **Arduino IDE**: Download the latest version from [here](https://www.arduino.cc/en/software).
- **Wire.h** library: Included with the Arduino IDE by default.
- **LiquidCrystal_I2C.h** library:  
  Downloaded from the [johnrickman/LiquidCrystal_I2C repository](https://github.com/johnrickman/LiquidCrystal_I2C).  
  - To install, download the repository as a ZIP file, then go to **Sketch > Include Library > Add .ZIP Library** in the Arduino IDE and select the downloaded ZIP file.

---

## Circuit Diagram
[Include an image of your circuit diagram here or a Fritzing diagram.]

### Pin Connections
| Component       | Arduino Pin   |
|------------------|---------------|
| Potentiometer    | A0 (Analog Pin) |
| LED              | D9 (PWM Pin)  |
| LCD SDA          | A4 (SDA Pin)  |
| LCD SCL          | A5 (SCL Pin)  |
| LCD VCC, GND     | 5V, GND       |

---

## Setup and Usage
1. **Hardware Setup**:
   - Connect the potentiometer, LED, and LCD to the Arduino according to the circuit diagram.
   - Ensure the LCD's I2C address is set correctly (default is `0x27`). Use an I2C scanner sketch if you're unsure of the address.

2. **Software Setup**:
   - Open the Arduino IDE and install the required libraries as described in the [Software Requirements](#software-requirements) section.
   - Copy and paste the project code (`sketch.ino`) into the Arduino IDE.

3. **Upload Code**:
   - Connect the Arduino to your computer via USB.
   - Select the correct board and port in the Arduino IDE.
   - Upload the code to the Arduino.

4. **Test the Project**:
   - Open the Serial Monitor to view potentiometer values and brightness levels.
   - Turn the potentiometer to adjust the brightness of the LED. The brightness level will also update in real time on the LCD screen.

---

## Code Explanation
1. **Reading the Potentiometer**:
   - The potentiometer's analog output (0–1023) is read using `analogRead()`.

2. **Mapping Values**:
   - The potentiometer value is mapped to a PWM range (0–255) using the `map()` function.

3. **PWM Output**:
   - The LED brightness is controlled using `analogWrite()`.

4. **LCD Feedback**:
   - The LCD displays the brightness level in real-time using the `setCursor()` and `print()` functions.

5. **Serial Monitor Output**:
   - Potentiometer values and corresponding brightness levels are printed for debugging and monitoring purposes.

---

## Credits
- **LiquidCrystal_I2C Library**: Provided by [John Rickman](https://github.com/johnrickman/LiquidCrystal_I2C).

---

## Future Improvements
- Add a button to toggle between multiple LEDs.
- Add functionality to save the last used brightness level.
- Implement a fade effect for smooth brightness transitions.

---

## License
This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute this project with proper attribution.

---

## Contact
For questions or feedback, feel free to reach out:
- Email: [your-email@example.com]
- GitHub: [your-github-profile-link]
