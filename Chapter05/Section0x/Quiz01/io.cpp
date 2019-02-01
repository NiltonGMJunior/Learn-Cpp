#include <iostream>
#include <limits>
#include "constants.h"

double getInitialHeight() // Reads initial height from user and return that value to the program
{
    while (true)
    {
        std::cout << "Enter the height of the tower in meters: ";
        double initialHeight;
        std::cin >> initialHeight;

        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "ERROR! Invalid input. Please try again.";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return initialHeight;
        }
    }
}

double calculateHeight(double initialHeight, double secondsPassed) // Calculates actual height based on inital height and time passed since ball droppe
{
    double distanceFallen = Constants::gravity * secondsPassed * secondsPassed / 2;
    double currentHeight = initialHeight - distanceFallen;
    return currentHeight;
}

void printHeight(double height, double secondsPassed) // Prints actual height along with time passed
{
    if (height > 0.0)
    {
        std::cout << "At " << secondsPassed << " seconds, the ball is at height:\t" << height << " meters.\n";
    }
    else
    {
        std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.\n";
    }
}

// void calculateAndPrintHeight(double initialHeight, double secondsPassed)
// {
//     double height = calculateHeight(initialHeight, secondsPassed);
//     printHeight(height, secondsPassed);
// }