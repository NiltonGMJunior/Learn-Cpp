#include "constants.h"
#include <iostream>

int main()
{
    double radius = 1.0;
    double circumference = 2 * radius * Constants::pi;
    std::cout << "Circumference is: " << circumference << std::endl;
    return 0;
}