#pragma once

#include <Arduino.h>
class Ultrasonic {
    public:

        Ultrasonic(int trigPin, int echoPin) {
            _trig = trigPin;
            _echo = echoPin;
            pinMode(_trig, OUTPUT);
            pinMode(_echo, INPUT);

        }

        void init_ult(){
          digitalWrite(_trig, LOW);
          delayMicroseconds(2);
          digitalWrite(_trig, HIGH);
          delayMicroseconds(10);
          digitalWrite(_trig, LOW);
        }

        float calc_dis(){
          dur=pulseIn(_echo,HIGH);
          dis_cm=(dur*0.034)/2;
          return dis_cm;
        }


    private:
        int _trig;
        int _echo;
};

