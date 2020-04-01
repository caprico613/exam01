#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

    uLCD.locate(5, 0);
      uLCD.printf("\n106061245\n"); //Default Green on black text
      uLCD.line(20, 20, 20, 60, BLACK);
    uLCD.line(20, 20, 60, 20, BLACK);
    uLCD.line(20, 60, 60, 60, BLACK);   // x,y just like cooridinate plane
    uLCD.line(60, 20, 60, 60, BLACK);
      //uLCD.circle(64 , 64 , 64, BLACK); // total width and length are both 128
      uLCD.background_color(WHITE);  // white background
      wait(30);


}