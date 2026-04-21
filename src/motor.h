#pragma once

#include<Arduino.h>

class motor {
    private:
        int _pin1;
        int _pin2;
    public:
        motor(int pin1,int pin2) {
            _pin1=pin1;
            _pin2=pin2;
            pinMode(_pin1,OUTPUT);
            pinMode(_pin2,OUTPUT);
        }
    void motor_front() {
            digitalWrite(_pin1,HIGH);
            digitalWrite(_pin2,LOW);
        }
    void motor_back() {
            digitalWrite(_pin1,LOW);
            digitalWrite(_pin2,HIGH);
        }
    void motor_off() {
            digitalWrite(_pin1,LOW);
            digitalWrite(_pin2,LOW);
        }
};