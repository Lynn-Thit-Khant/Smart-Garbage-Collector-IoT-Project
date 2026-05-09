#include <Arduino.h>
#include <Servo.h>

// These variables and pin definitions are declared in main.ino.
extern Servo obstacle;
extern int EchoPin1;
extern int TrigPin1;

extern int motor_IN1;
extern int motor_IN2;
extern int motor_IN3;
extern int motor_IN4;

void move_forward(void) {
    digitalWrite(motor_IN1, HIGH);
    analogWrite(motor_IN2, 90);
    digitalWrite(motor_IN3, LOW);
    analogWrite(motor_IN4, 90);
}

void move_backward(void) {
    digitalWrite(motor_IN1, LOW);
    analogWrite(motor_IN2, 90);
    digitalWrite(motor_IN3, HIGH);
    analogWrite(motor_IN4, 90);
}

void brake(void) {
    digitalWrite(motor_IN1, LOW);
    digitalWrite(motor_IN2, LOW);
    digitalWrite(motor_IN3, LOW);
    digitalWrite(motor_IN4, LOW);
}

void turn_right(void) {
    digitalWrite(motor_IN2, LOW);
    digitalWrite(motor_IN3, LOW);
    analogWrite(motor_IN4, 90);
}

void turn_left(void) {
    digitalWrite(motor_IN1, HIGH);
    analogWrite(motor_IN2, 90);
    digitalWrite(motor_IN4, LOW);
}

int degree(int degree) {
    obstacle.write(degree);
    delay(500);
    int distance = getDistance(EchoPin1, TrigPin1);
    delay(200);
    return distance;
}

int getDistance(int EchoPin, int TrigPin) {
    long pulseDuration;

    digitalWrite(TrigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(TrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(TrigPin, LOW);

    pulseDuration = pulseIn(EchoPin, HIGH);
    return pulseDuration / 58; // Convert pulse duration to centimetres.
}
