#include <iostream>

// Reads and integer from the console and returns it
int readNumber()
{
    std::cout << "Enter an integer: "; // Prompts user for an integer
    int user_input; // user_input will store the value read from teh console
    std::cin >> user_input; // reads integer form console and stores it in user_input
    return user_input;
}

// Prints the sum of x and y to the console
void writeAnswer(int x, int y)
{
    std::cout << x << " + " << y << " = " << x + y << std::endl;
}