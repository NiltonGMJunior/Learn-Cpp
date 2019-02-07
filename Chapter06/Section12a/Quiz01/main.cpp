#include "io.h"
#include "calculate.h"
#include <string>
#include <iostream>

int main()
{
    std::string nameInput = getName();
    if (isNameInArray(nameInput))
        std::cout << nameInput << " was found.\n";
    else
        std::cout << nameInput << " was not found.\n";

    return 0;
}