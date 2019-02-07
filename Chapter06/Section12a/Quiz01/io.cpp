#include <iostream>
#include <string>
#include <limits>

std::string getName()
{
    while (true)
    {
        std::cout << "Enter a name: ";
        std::string name;
        std::cin >> name;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "INVALID INPUT!\n";
        }
        else
        {
            return name;
        }
    }
}