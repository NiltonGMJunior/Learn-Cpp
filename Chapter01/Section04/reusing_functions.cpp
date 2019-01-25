#include <iostream>

// getValueFromUser will read a value in from the user, and return it to the calle
int getValueFromUser()
{
    std::cout << "Enter an integer: "; // ask user for an integer
    int a; // allocate a variable to hold the user input
    std::cin >> a; // get user input input from console and store in varable a
    return a;
}

int main()
{
    int x = getValueFromUser(); // first call to getValueFromUser
    int y = getValueFromUser(); // second call to getValueFromUser

    std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}