#pragma once

#include<Arduino.h>

class motor {
    private:
        int _pin;
    public:
        motor(int pin) {
            _pin=pin;
            pinMode(_pin,OUTPUT);
        }
    void motor_front() {
            digitalWrite(_pin,HIGH);
        }
    void motor_back() {
            digitalWrite(_pin,LOW);
        }
};