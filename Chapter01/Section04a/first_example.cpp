#include <iostream>

// This function takes no parameters
// It does not rely on the caller for anything
void doPrint()
{
    std::cout << "In doPrint()" << std::endl;
}

// This function takes one integer parameter named x
// The caller will supply the value x
void printValue(int x)
{
    std::cout << x << std::endl;
}

// This function has two integer parameters, one named x and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
    return x + y;
}

int main()
{
    doPrint(); // No argument was passed to the doPrint() function
    printValue(5); // The integer 5 was passed to the printValue() function
    std::cout << add(5, 7) << std::endl; // The integers 5 and 7 were passed to the add() function
    return 0;
}

