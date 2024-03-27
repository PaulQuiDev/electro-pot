# Smart Pot with Humidity Sensor

![Pot](https://github.com/PaulQuiDev/electro-pot/assets/80120197/d8b9706d-b092-42dd-8b55-2ff1fff8b3d2)
*Image showing the smart pot*

## Introduction

This project involves the creation of a smart pot equipped with a humidity sensor. The humidity sensor consists of two copper plates where the conductivity of water completes the circuit. The variation in conductivity is measured using a voltage divider with a 5 kΩ resistor, and the sensor's resistance ranges from 1 ohm to 7 kΩ. The humidity sensor has a capacitance of 9 nF, hence a DC current measurement approach is employed, and an RC filter is not used for conductivity measurement.

![Humidity Sensor](https://github.com/PaulQuiDev/electro-pot/assets/80120197/18db774f-4adc-482a-9384-bd08676a609e)
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

![LEDs](https://github.com/PaulQuiDev/electro-pot/assets/80120197/c06666c0-e92f-4729-9dd5-5cc1347b9584)
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


