#include "mbed.h"


PwmOut PWM1(D6);


int main() {

    while(1){

        PWM1.period(0.001);
        for (int i = 0; i <= 1; i+=0.1)
        {
            PWM1 = i;
            wait(0.1);
        }
        
        for (int i = 1; i >= 0; i-=0.1)
        {
            PWM1 = i;
            wait(0.1);
        }       

    }
}