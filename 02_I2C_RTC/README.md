# Real-Time Clock (RTC) with ESP32 S3 CAM

This project demonstrates how to interface an RTC (Real-Time Clock) with an ESP32 S3 CAM board using I2C communication. The code reads the current time and date from an RTC module and prints it to the Serial Monitor.

## Components

- ESP32 S3 CAM board
- RTC module (DS1307)
- Jumper wires
- Breadboard (optional)

## Libraries

- `Wire.h`: For I2C communication.
- `RTClib.h`: To interface with the RTC module.

## Setup

### Hardware Connections

Connect the RTC module to the ESP32 S3 CAM board as follows:

- **RTC VCC** to **ESP32 5V**
- **RTC GND** to **ESP32 GND**
- **RTC SDA** to **ESP32 GPIO9**
- **RTC SCL** to **ESP32 GPIO8**

### Requirements
- RTClib.h
- Wire.h (usually included by default)

### Explanation

- **setup()**:
  - Initializes serial communication at 9600 baud rate.
  - Initializes I2C communication.
  - Waits for the RTC to be ready.
  - Sets the RTC time to the time when the code was compiled.
  
- **loop()**:
  - Retrieves the current date and time from the RTC.
  - Prints the date and time to the Serial Monitor.
  - Waits for 1 second before repeating.

## Purpose

This small project is intended to provide a better understanding of I2C communication protocol.

