#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function prototype)

/*
It should be noted that forward declaration can be done without naming the parameters
int add(int, int); would work just fine. 
However, this form is not desired
*/

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl; //this works because add() was forwardly declared
    return 0;
}

int add(int x, int y) // even tough the body of add() isn't defined until here
{
    return x + y;
}