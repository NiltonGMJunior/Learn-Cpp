#include <iostream>
#include "constants.h"

int main()
{   
    std::cout << "This program calculates the circumference lenght for a given radius: " << std::endl;
    std::cout << "Please insert the radius of the circle: ";
    double radius;
    std::cin >> radius;
    std::cout << "The circumference of a circle with radius " << radius << " is: " << 2 * radius * constants::pi << std::endl;
    return 0;
}