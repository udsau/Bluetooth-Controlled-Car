# Arduino Bluetooth Controlled Car

A custom robotic car controlled wirelessly via a smartphone using an HC-05 Bluetooth module and an Arduino. Features full directional control and an automatic failsafe timer to halt the vehicle if connection drops.

## Hardware Components

- **Microcontroller:** Arduino Nano 
- **Bluetooth Module:** HC-05
- **Motor Driver:** L293D
- **Motors:** DC Gear Motors (x2) + Chassis
- **Power Source:** External 9V Battery 

## Circuit Pinout

| Component | Component Pin | Arduino Pin |
| :--- | :--- | :--- |
| **HC-05 BT** | TX | Pin 10 |
| **HC-05 BT** | RX | Pin 11 |
| **Motor Driver (M1)** | IN1 | Pin 2 |
| **Motor Driver (M1)** | IN2 | Pin 3 |
| **Motor Driver (M2)** | IN3 | Pin 4 |
| **Motor Driver (M2)** | IN4 | Pin 5 |

## Control Commands

| Command | Action |
| :---: | :--- |
| `F` / `f` | Move Forward |
| `B` / `b` | Move Backward |
| `L` / `l` | Turn Left |
| `R` / `r` | Turn Right |
| `S` / `s` | Stop |
