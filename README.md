# Arduino Bluetooth Controlled Car

A 2WD chassis controlled over Bluetooth (HC-05) using an Arduino Nano and L293D motor driver.

## Hardware Components

- **Microcontroller:** Arduino Nano 
- **Bluetooth Module:** HC-05
- **Motor Driver:** L293D
- **Motors:** DC Gear Motors (x2) + Chassis
- **Power Source:** External 9V Battery 

## App Used  
Used **Serial Bluetooth Terminal** on Android:
- Set buttons (`F`, `B`, `L`, `R`, `S`) to **Send w/o Newline**.
  
## Issues Faced 
- Running two motors and an HC-05 off a single 9V battery drops voltage quickly. If the Nano keeps resetting, switch to 18650 Li-ion cells.
- Make sure the Arduino GND pin is wired directly into the motor driver's GND block, otherwise signal pulses won't register.
