#include <iostream>

// Reads an integer value from the console
int readInteger()
{
    int x;                              // Integer to be read from teh console as per user input
    std::cout << "Enter an integer: ";  // Input prompt
    std::cin >> x;                      // Reads input from console
    return x;                           // Returns user input
}

// Takes an integer x and returns 2x
int doubleNumber(int x)
{
    return 2 * x;
}

// Takes and integer value and prints it out to the console
void printInteger(int x)
{
    std::cout << x << std::endl;
}

int main()
{
    std::cout << "This program takes an integer as input and returns its double" << std::endl;
    int x = readInteger();     // Initializes the variable x to be the user input from the console
    int y = doubleNumber(x);   // Initializes the variable y to be two times the user input, given to be x
    printInteger(y);           // Prints the value of y, as determined by the doubleNumber() function
    
    return 0;
}