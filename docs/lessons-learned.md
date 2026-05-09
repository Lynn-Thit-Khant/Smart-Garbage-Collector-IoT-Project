# Lessons Learned

## Hardware-Software Integration

This project showed that embedded systems require both correct code and reliable physical wiring. A small wiring mistake can cause a feature to fail even if the code is correct.

## Sensor Reliability

Sensor readings are affected by distance, object shape, lighting, and surface material. Testing under different conditions is important.

## Actuator Control

Servo movement needs careful tuning because mechanical parts can jam or move inaccurately if angles are not calibrated.

## Modular Programming

Separating sensor, motor, display, and collection logic makes the code easier to debug and explain.

## Testing

The project reinforced the importance of validating each subsystem separately before testing the complete robot.
