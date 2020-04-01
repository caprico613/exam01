#include "mbed.h"

#include "uLCD_4DGL.h"

PwmOut PWM1(D6);
uLCD_4DGL uLCD(D1, D0, D2);
Serial pc( USBTX, USBRX );
//AnalogIn Ain(A0);
DigitalIn  Ddata(D7);

float j;

int main()

{

    uLCD.locate(5, 0);
    uLCD.printf("\n106061245\n"); //Default Green on black text
    uLCD.line(20, 20, 20, 60, BLACK);
    uLCD.line(20, 20, 60, 20, BLACK);
    uLCD.line(20, 60, 60, 60, BLACK);   // x,y just like cooridinate plane
    uLCD.line(60, 20, 60, 60, BLACK);
    uLCD.background_color(WHITE);  // white background

    while(1){

        PWM1.period(0.001);
        for (float i = 0; i <= 1; i+=0.1)
        {
            PWM1 = i;
            j = Ddata;
            pc.printf("%1.3f\r\n", j);            
            wait(0.1);
        }
        
        for (float i = 1; i >= 0; i-=0.1)
        {
            PWM1 = i;
            j = Ddata;
            pc.printf("%1.3f\r\n", j);    
            wait(0.1);
        }       


    }

}