#include <iostream>

int main()
{
    std::cout << "Enter a number: "; // Ask user for a number
    int x; // No need to initialize x since we're going to overwrite that value on the very next line
    std::cin >> x; // Read number from console and store it in x
    std::cout << "You entered " << x << std::endl; 
    return 0;
}
