# UART Communication Between ESP Boards

This repository showcases the code used to establish UART communication between two ESP boards: a Freenove ESP32-S3-WROOM CAM Board (receiver) and a diymore ESP32 S3 WROOM1 N16R8 (sender). The sender is powered by a USB wall charger, and sends incrementing numerical data every 1.2 seconds. The receiver board reads and displays this data.

## Hardware Setup

- **Receiver**: Freenove ESP32-S3-WROOM CAM Board
- **Sender**: diymore ESP32 S3 WROOM1 N16R8
- **Power Source for Sender**: USB wall charger
- **Breadboard**
- **Jumper Cables**
- **USB-A to USB-C Cables** (2x)

## Connection Details

- **Sender (TX)** <--> **Receiver (RX)**
- **Sender (RX)** <--> **Receiver (TX)**
- **Common Ground**: Both boards must share a common ground for proper UART communication.

## Notes

- The RX and TX pins are inverted between the boards, so ensure correct wiring.
- While uploading the code, ensure the boards are not connected with each others.

## Demo Video

A short demo video showcasing the UART communication between the two ESP boards is available in this repository.

## Usage

1. **Power the sender**: Connect the sender board to a USB wall charger.
2. **Monitor the receiver**: Open the serial monitor for the receiver board in the Arduino IDE to see the received data.

