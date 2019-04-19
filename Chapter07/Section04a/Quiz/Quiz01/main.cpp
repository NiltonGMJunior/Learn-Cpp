#include <iostream>

int sumTo(const unsigned int n)
{
    return n * (n + 1) / 2; // assumes n >= 1
}

int main()
{
    std::cout << "The sum of integers from 1 to " << 16 << " is " << sumTo(16) << '\n';
    return 0;
}