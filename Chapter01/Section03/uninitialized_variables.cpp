#include <iostream>

void doNothing(const int &x)
{
}

int main()
{
    // Define an integer variable named x
    int x; // This variable is unitialized

    doNothing(x); // Makes the compiler think the variable x is being used
    
    // Print the value of x to the screen (output value is unknown since x is uninitialized)
    std::cout << x;
    
    return 0;
}