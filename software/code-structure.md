# Code Structure

The source code is organised by function.

| File | Purpose |
|---|---|
| `main.ino` | Main Arduino sketch and control loop |
| `motor_control.cpp` | Movement and distance measurement functions |
| `sensor_management.cpp` | Sensor reading functions |
| `garbage_collection.cpp` | Arm, claw, and sorting functions |
| `display.cpp` | LCD display update function |

## Main Loop

The main loop checks sensor input, controls movement, detects obstacles, collects waste, and updates the LCD display.

## Design Approach

The code separates movement, sensing, collection, and display behaviour into different source files to improve readability and maintainability.
