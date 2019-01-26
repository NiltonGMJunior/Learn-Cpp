#include <iostream>

bool isEven(int x)
{
    return (x % 2 == 0);
}

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    
    bool isIntegerEven;
    isIntegerEven = isEven(x);
    if (isIntegerEven)
        std::cout << x << " is even" << std::endl;
    else
        std::cout << x << " is odd" << std::endl;

    return 0;
}