# Wiring Guide

This guide documents the wiring concept used by the robot.

## General Wiring Notes

- Connect all components to a common ground.
- Power servo motors with stable voltage to avoid unstable movement.
- Keep motor power wiring separate from signal wiring where possible.
- Confirm sensor input pins before uploading the sketch.

## Main Connections

| Device | Connection Type |
|---|---|
| Ultrasonic Sensor | Trigger and Echo digital pins |
| Infrared Sensor | Digital or analog input pin |
| Servo Motors | PWM-capable control pins |
| Motor Driver | Digital/PWM motor control pins |
| LCD Display | I2C SDA/SCL pins |

## Practical Note

Exact pin numbers should match the Arduino sketch in `src/main.ino`.
