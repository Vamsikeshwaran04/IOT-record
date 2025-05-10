# Experiment 1: Familiarization with Arduino and Software Installation

## Aim

To study the Arduino UNO hardware and install and set up the Arduino IDE software environment.

## Apparatus Required

| Sl. No | Name of Equipment            | Quantity |
|--------|------------------------------|----------|
| 1      | Arduino UNO                  | 1        |
| 2      | Computer with Arduino IDE    | 1        |
| 3      | USB Cable                    | 1        |

## Theory

### Internet of Things (IoT)
IoT refers to a network of physical objects embedded with sensors, software, and other technologies to connect and exchange data with other systems via the internet. Key enabling technologies include embedded systems, wireless sensor networks, control systems, and machine learning. In consumer applications, IoT is common in smart home devices such as thermostats, lighting, and security systems.

### Microcontroller
A microcontroller is a special-purpose embedded computer used to control products and devices. They are task-specific, low-power, and run dedicated programs stored in ROM. Examples include applications in household appliances and automotive systems.

### Arduino UNO
The Arduino UNO is an open-source microcontroller board based on the Atmel AVR architecture. It allows users to interface with hardware using simple software tools provided in the Arduino IDE. It includes both digital and analog I/O pins, built-in LED, serial communication interfaces, and power regulation features.

### General Pin Functions
- **VIN, 5V, 3.3V, GND**: Power supply and ground.
- **Digital Pins (0–13)**: Used for I/O with functions like `digitalWrite()` and `digitalRead()`.
- **Analog Pins (A0–A5)**: Used for analog input with `analogRead()`.

### Special Pin Functions
- **UART**: Pins 0 (RX) and 1 (TX) for serial communication.
- **Interrupts**: Pins 2 and 3.
- **PWM**: Pins 3, 5, 6, 9, 10, 11.
- **SPI**: Pins 10–13.
- **I²C**: Pins A4 (SDA) and A5 (SCL).
- **AREF**: Analog reference voltage input.

### Arduino IDE
The Arduino IDE is a cross-platform development environment for writing, compiling, and uploading programs to Arduino boards. It uses C/C++ with an easy-to-use API and is available on Windows, macOS, and Linux.

## Installation Procedure
1. Visit [https://arduino.cc/en/Main/Software](https://arduino.cc/en/Main/Software).
2. Download and extract the IDE software.
3. Connect Arduino UNO via USB.
4. Install necessary drivers through Device Manager.
5. Open Arduino IDE and select the correct board (Tools > Board > Arduino UNO).

## Result
The Arduino UNO hardware was studied, and the Arduino IDE software was successfully installed and configured.
