#include <Servo.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// Motor control declarations
void move_forward(void);
void move_backward(void);
void brake(void);
void turn_right(void);
void turn_left(void);
int degree(int degree);
int getDistance(int EchoPin, int TrigPin);

// Garbage collection declarations
void collect_garbage(void);
void release_garbage(void);
void move_extension_down(int position);
void move_extension_up(int garbage_type);
int recyclable_garbage(void);
int non_recyclable_garbage(void);

// Sensor management declarations
int garbage_detector(void);
int IR_sensor(void);

// Display declaration
void display(int recyclable_count, int non_recyclable_count);

// Pin definitions
#define Hit_aPin 4
#define Hit_bPin 2
#define motor_IN2 6
#define motor_IN1 9
#define motor_IN4 3
#define motor_IN3 5
#define TrigPin1 8
#define EchoPin1 7
#define garbage_sensorPin A0
#define garbage_outputPin A0
#define back_IR_sensor A1
#define back_IR_output A1

// Global variables
Servo claw;
Servo obstacle;
Servo extension;

int arm_position = 180;
int garbage;
int counterA = 0;
int counterB = 0;
int hit_a, hit_b;

void setup() {
    Serial.begin(9600);

    obstacle.attach(10);
    claw.attach(12);
    extension.attach(A2);

    lcd.init();
    lcd.begin(16, 2);
    lcd.backlight();
    lcd.clear();

    move_extension_up(180);
}

void loop() {
    garbage = garbage_detector();

    while (garbage == 1) {
        move_forward();
        garbage = garbage_detector();
        Serial.println(garbage);
    }

    brake();

    int infront_obstacle = getDistance(EchoPin1, TrigPin1);

    if (infront_obstacle <= 20) {
        delay(1000);
        // Add obstacle handling routine here if required.
    } else {
        delay(1000);
        obstacle.write(90);
        move_extension_down(arm_position);
        collect_garbage();
    }
}
