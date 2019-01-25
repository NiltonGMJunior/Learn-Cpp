#include "io.h"

int main()
{
    double towerHeight;
    int timePassed(0);
    
    towerHeight = getHeight();
    printBallHeight(towerHeight, timePassed);
    return 0;
}