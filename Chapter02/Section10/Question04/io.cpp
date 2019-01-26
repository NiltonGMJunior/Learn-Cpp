#include <iostream>
#include "constants.h"

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

void printBallHeight(const double towerHeight, int timePassed)
{
    double ballHeight;
    ballHeight = towerHeight - (timePassed * timePassed * myConstants::gravity / 2);
    if (ballHeight > 0)
    {
        if (timePassed <= 5)
        {
            std::cout << "At " << timePassed << " seconds, the ball is at height: " << ballHeight << " meters" << std::endl;
            printBallHeight(towerHeight, timePassed + 1);
        }
    }
    else
    {
        std::cout << "At " << timePassed << " seconds, the ball is on the ground";  
    }
}
