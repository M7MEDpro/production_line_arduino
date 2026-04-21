#pragma once

#include<Arduino.h>
class led {
private:
    int _pin;
public:
    led(int pin) {
        _pin=pin;
        pinMode(_pin,OUTPUT);
    }
    void led_ON() {
        digitalWrite(_pin,HIGH);
    }
    void led_OFF() {
        digitalWrite(_pin,LOW);

    }
};