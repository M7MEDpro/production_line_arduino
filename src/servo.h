#pragma once

#include<Arduino.h>
#include<Servo.h>

class servoMotor {
    private:
    int _pin;
    Servo _servo;

    public:
    servoMotor(int pin) {
        _pin=pin;
        _servo.attach(_pin);
    }
    void servo_move(int angle) {
        angle = constrain(angle,0,180);
        _servo.write(angle);
    }
};
