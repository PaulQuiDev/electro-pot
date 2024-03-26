# Smart Pot with Humidity Sensor

![Pot](https://devinci-my.sharepoint.com/9cf0d9e7-6e1a-454f-bdfe-a82baa097ea0)
*Image showing the smart pot*

## Introduction

This project involves the creation of a smart pot equipped with a humidity sensor. The humidity sensor consists of two copper plates where the conductivity of water completes the circuit. The variation in conductivity is measured using a voltage divider with a 5 kΩ resistor, and the sensor's resistance ranges from 1 ohm to 7 kΩ. The humidity sensor has a capacitance of 9 nF, hence a DC current measurement approach is employed, and an RC filter is not used for conductivity measurement.

![Humidity Sensor](humidity_sensor_image.jpg)
*Image showing the humidity sensor*

## Circuit Characteristics

- **Humidity Sensor**:
  - Resistance Range: 1 ohm to 7 kΩ
  - Capacitance: 9 nF
  - Measurement Method: Voltage Divider with 5 kΩ resistor

- **LEDs**:
  - Protected by a 150 ohm resistor

- **GPIO Ports**: 
  - GPIO ports must be used for detection.

![LEDs](blob:https://devinci-my.sharepoint.com/1f169ad7-0af5-4699-a379-69f7f65e8381)
*Image showing the LEDs*

## Setup

1. Connect the humidity sensor to the designated GPIO port.
2. Connect the LEDs to their respective GPIO ports.
3. Ensure proper power supply to the circuit.

## Usage

- The smart pot continuously monitors humidity levels.
- LEDs indicate humidity status: 
  - Red LED: Indicates high humidity (above 1100)
  - Red LED blinks rapidly: Indicates low humidity (below 400)
  - Green LED blinks once: Indicates normal humidity levels.

## Acknowledgements

This project was inspired by the need for efficient plant care through automated humidity monitoring.

## Author

[Paul RAGUET]


