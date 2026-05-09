# System Overview

This project uses an Arduino-based control system to operate an autonomous waste collection robot.

## Main Functions

- Detect obstacles using an ultrasonic sensor
- Detect waste using an infrared sensor
- Navigate using motor driver outputs
- Collect waste using servo-controlled arm and claw mechanisms
- Sort waste into recyclable and non-recyclable compartments
- Display collection counts on a 16x2 LCD display

## High-Level System Flow

```text
Sensor Input
    ↓
Arduino Processing
    ↓
Movement / Collection / Sorting Decision
    ↓
Motor Driver + Servo Motors
    ↓
LCD Feedback
```

## Purpose

The system demonstrates how embedded software can interact with physical sensors and actuators to perform autonomous tasks.
