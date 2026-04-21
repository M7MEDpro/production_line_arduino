#pragma once
#include<Arduino.h>

class IR {
    private:
    int _pin;
    public:
    IR(int pin) {
        _pin=pin;
        pinMode(_pin,INPUT);
    }
    bool read_IR( int _pin) {
        if(digitalRead(_pin)==HIGH){
            return true;
        }
        else {
            return false;
        }
    }

};