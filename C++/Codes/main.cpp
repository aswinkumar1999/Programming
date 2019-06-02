#include "graphics.h"

int main( )
{
    initwindow(800,600);
    circle(100, 50, 40);
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}
