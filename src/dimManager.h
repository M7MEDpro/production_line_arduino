#pragma once

#include<Arduino.h>
#include<ultra_sonic.h>
class dim {
    private:
    Ultrasonic& left;
    Ultrasonic& right;
    Ultrasonic& up;

    public:
    dim(Ultrasonic& left, Ultrasonic& right , Ultrasonic& up) : left(left), right(right), up(up) {}
    bool isItFit() {

        float disLeft = left.calc_dis();
        float disRight =right.calc_dis();
        float disUp =up.calc_dis();

        float work_wid=8-(disLeft + disRight);
        float work_hi =12 - (disUp);

        float tolerance = 0.2;

        bool width_ok  = abs(work_wid - 1.5) < tolerance;
        bool height_ok = abs(work_hi  - 1.5) < tolerance;

        if(width_ok && height_ok) {
            return true;
        }
        else {
            return false;
        }

    }
};