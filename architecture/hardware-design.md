# Hardware Design

## Core Hardware

| Component | Role |
|---|---|
| Arduino Uno | Main controller for sensor input and actuator output |
| Ultrasonic Sensor HC-SR04 | Measures distance for obstacle detection |
| Infrared Sensor | Detects object or waste presence |
| Servo Motors | Controls arm, claw, and extension mechanisms |
| Motor Driver | Controls robot movement |
| 16x2 I2C LCD Display | Shows real-time collection counts |

## Design Summary

The robot uses sensor input to decide whether to move, avoid obstacles, collect waste, or update the LCD display. Servo motors control the mechanical collection system, while the motor driver controls movement.
