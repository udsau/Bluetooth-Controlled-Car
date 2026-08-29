# 🚗 Arduino Bluetooth Controlled Car

A custom robotic car controlled wirelessly via a smartphone using an HC-05 Bluetooth module and an Arduino. Features full directional control and an automatic failsafe timer to halt the vehicle if connection drops.

## 📌 Features

- **Wireless Control:** Real-time steering via Bluetooth serial communication.
- **Failsafe System:** Automatically stops motors if no command is received within 500 ms.
- **Differential Steering:** Dual-channel motor driver control for forward, reverse, and turning maneuvers.

## 🛠️ Hardware Components

- **Microcontroller:** Arduino Nano / Uno
- **Bluetooth Module:** HC-05
- **Motor Driver:** L293D
- **Motors:** 2x DC Gear Motors + Chassis
- **Power Source:** External Battery Pack + 5V Supply

## 🔌 Circuit Pinout

| Component | Component Pin | Arduino Pin |
| :--- | :--- | :--- |
| **HC-05 BT** | TX | Pin 10 |
| **HC-05 BT** | RX | Pin 11 |
| **Motor Driver (M1)** | IN1 | Pin 2 |
| **Motor Driver (M1)** | IN2 | Pin 3 |
| **Motor Driver (M2)** | IN3 | Pin 4 |
| **Motor Driver (M2)** | IN4 | Pin 5 |

> **Note:** A common ground connection between the Arduino GND pin and the Motor Driver GND terminal is required for proper signal transmission.

## 🎮 Control Commands

| Command | Action |
| :---: | :--- |
| `F` / `f` | Move Forward |
| `B` / `b` | Move Backward |
| `L` / `l` | Turn Left |
| `R` / `r` | Turn Right |
| `S` / `s` | Stop |

## 🚀 Getting Started

1. Open the `.ino` sketch in the Arduino IDE.
2. Connect your board and select the correct Board & COM Port under **Tools**.
3. Upload the sketch to the Arduino.
4. Pair your smartphone with the **HC-05** module (default PIN is usually `1234` or `0000`).
5. Open a Bluetooth controller app (such as *Serial Bluetooth Terminal* or *Dabble*) and configure the buttons to transmit the directional characters.

## 📜 License

This project is licensed under the [MIT License](LICENSE).
