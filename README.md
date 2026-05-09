# Smart Garbage Collector IoT Project

## Overview

This project is an Arduino-based autonomous garbage collection robot designed to detect obstacles, identify waste objects, collect items using servo-controlled mechanisms, and display real-time collection counts on an LCD screen.

The project demonstrates embedded systems fundamentals, sensor-based navigation, actuator control, and real-time hardware feedback using Arduino and C++.

## Key Features

- Autonomous movement using ultrasonic sensor-based obstacle detection
- Waste detection using infrared sensor input
- Servo-controlled arm and claw mechanism for waste collection
- Sorting mechanism for recyclable and non-recyclable compartments
- LCD display showing real-time collection counts
- Modular C++ code structure for motor control, sensor handling, display logic, and collection behaviour

## Technologies Used

- Arduino Uno
- C++
- Arduino IDE
- Ultrasonic Sensor HC-SR04
- Infrared Sensor
- Servo Motors
- Motor Driver
- 16x2 I2C LCD Display

## Repository Structure

| Folder | Purpose |
|---|---|
| `src/` | Arduino/C++ source code |
| `architecture/` | System overview, hardware design, and control flow |
| `hardware/` | Components, wiring notes, and pin mapping |
| `software/` | Code structure and logic documentation |
| `validation/` | Testing checklist and validation notes |
| `docs/` | Design decisions, troubleshooting, and lessons learned |

## Skills Demonstrated

- Embedded systems programming
- Sensor integration
- Actuator control
- Robotics logic
- Hardware-software integration
- Modular C++ development
- Testing and troubleshooting

## Outcome

The robot integrates sensors, motors, servo mechanisms, and LCD feedback into a working autonomous collection system. It demonstrates practical hardware-software integration and structured embedded systems development.
