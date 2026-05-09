#include <Arduino.h>

extern int garbage_sensorPin;
extern int garbage_outputPin;
extern int back_IR_sensor;
extern int back_IR_output;

int garbage_detector(void) {
    int sensor_value = digitalRead(garbage_sensorPin);

    if (sensor_value == LOW) {
        digitalWrite(garbage_outputPin, HIGH);
    } else {
        digitalWrite(garbage_outputPin, LOW);
    }

    return sensor_value;
}

int IR_sensor(void) {
    int sensor_value = digitalRead(back_IR_sensor);

    if (sensor_value == LOW) {
        digitalWrite(back_IR_output, HIGH);
    } else {
        digitalWrite(back_IR_output, LOW);
    }

    return sensor_value;
}
