#pragma once

#include<Arduino.h>

class Buzz {
private:
    int _pin;
public:
    Buzz(int pin) {
        _pin=pin;
        pinMode(_pin,OUTPUT);
    }
    void On() {
            digitalWrite(_pin,HIGH);
        }
    void Off() {
            digitalWrite(_pin,LOW);
        }
};
