# 📏 Arduino Digital Distance Measuring Tool

This project is a digital distance measuring system built with Arduino Uno, an ultrasonic sensor (HC-SR04), an RGB LED, a 16x2 LCD display, and a buzzer. It provides a real-time visual and audio representation of the distance between the sensor and an object.

## 🚀 Features

- 📡 Measures distance using an HC-SR04 ultrasonic sensor.
- 💡 RGB LED displays:
  - 🟥 Red when object is **very close** (< 30 cm)
  - 🟨 Yellow when object is at **medium range** (30–100 cm)
  - 🟩 Green when object is **far** (> 100 cm)
- 🔊 Buzzer provides audio alert with different frequencies based on distance.
- 📺 LCD screen shows the real-time distance in centimeters.

## 🧰 Hardware Used

| Component            | Quantity |
|---------------------|----------|
| Arduino Uno R3      | 1        |
| HC-SR04 Ultrasonic Sensor | 1        |
| 16x2 LCD (parallel) | 1        |
| RGB LED (Common Cathode) | 1        |
| Piezo Buzzer        | 1        |
| 10kΩ Potentiometer  | 1        |
| 220Ω Resistors      | 3        |
| Breadboard & Wires  | As needed |

## 🔌 Wiring Summary

### LCD (in 4-bit mode)

| LCD Pin | Arduino Pin |
|---------|-------------|
| RS      | D12         |
| RW      | GND         |
| E       | D11         |
| D4      | D6          |
| D5      | D7          |
| D6      | D8          |
| D7      | D9          |
| VO      | Potentiometer center |
| VSS     | GND         |
| VDD     | 5V          |
| LED+    | 5V (via 220Ω) |
| LED−    | GND         |

### HC-SR04

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| TRIG       | D2          |
| ECHO       | D3          |

### RGB LED

| LED Pin   | Arduino Pin |
|-----------|-------------|
| RED       | D4 (via 220Ω) |
| GREEN     | D5 (via 220Ω) |
| Cathode   | GND         |

### Buzzer

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| +          | D10         |
| -          | GND         |

## 🧠 How It Works

1. The **ultrasonic sensor** detects the distance to the nearest object.
2. The **LCD** displays the measured distance.
3. The **RGB LED** changes color depending on the distance range.
4. The **buzzer** beeps with frequency relative to how close the object is.

## 🖥️ Simulation

You can test this project in [Tinkercad Circuits]([https://www.tinkercad.com/](https://www.tinkercad.com/things/8u9eFpkB14Y/editel?returnTo=%2Fdashboard&sharecode=FBCp8peBNO0uVE9HTSugmXdO7Nw_jP0k93XFGcYLJFU)) using the provided link.

## 🙌 Acknowledgments

Special thanks to the Tinkercad community and Arduino documentation for inspiration and guidance.

---

