#include "graphics.h"
#include <iostream>
#include <math.h>


int a, b;
int originx, originy;

double len = 300;
int x, y;
int bobradius = 30;



float angle = 0, aVel = 0, aAcc = 0;

void paint()
{
    cleardevice();
    setcolor(YELLOW);
    fillellipse(originx, originy, 8, 8);
    line(originx, originy, x, y);
    fillellipse(x, y, bobradius, bobradius);
}

void main()
{
    double decr;
    initgraph(&a, &b, "C:\\TURBOC3\\BGI\\");
    originx = 300;
    originy = 30;

    x = 300;
    y = 300;


    while (1)
    {
        x = originx + len * sin(angle);
        y = originy + len * cos(angle);
        angle += .09;



        paint();
        aAcc = -.01 * sin(angle);
        angle += aVel;
        aVel += aAcc;
        aVel *= .99;
        delay(40);


    }

}