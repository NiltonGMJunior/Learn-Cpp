#include <iostream>

int value(5);

int main()
{
    int value = 7; // hides the global variable
    ++value; // increments the local variable

    --(::value); // decrements the global variable, but not the local variable

    std::cout << "local value: " << value << "\n";
    std::cout << "global value: " << ::value << "\n";

    return 0;
} // local value is destroyed