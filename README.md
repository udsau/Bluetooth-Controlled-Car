# Arduino Bluetooth Controlled Car

A custom robotic car controlled wirelessly via a smartphone using an HC-05 Bluetooth module and an Arduino. Features full directional control and an automatic failsafe timer to halt the vehicle if connection drops.

## Hardware Components

- **Microcontroller:** Arduino Nano 
- **Bluetooth Module:** HC-05
- **Motor Driver:** L293D
- **Motors:** DC Gear Motors (x2) + Chassis
- **Power Source:** External 9V Battery 

## Control Commands

| Command | Action |
| :---: | :--- |
| `F` / `f` | Move Forward |
| `B` / `b` | Move Backward |
| `L` / `l` | Turn Left |
| `R` / `r` | Turn Right |
| `S` / `s` | Stop |
