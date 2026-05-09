# Control Flow

## Main Behaviour

1. Read waste detection sensor.
2. Move forward while searching for waste.
3. Stop when waste or obstacle condition is detected.
4. Check distance using the ultrasonic sensor.
5. If obstacle is close, avoid or reposition.
6. If waste is reachable, lower the arm extension.
7. Close the claw to collect the waste.
8. Sort the item into recyclable or non-recyclable category.
9. Update the LCD count.

## Simplified Logic

```text
Start
  ↓
Read sensors
  ↓
Waste detected?
  ├── No → Continue moving
  └── Yes → Stop and collect
             ↓
          Sort waste
             ↓
          Update LCD
```
