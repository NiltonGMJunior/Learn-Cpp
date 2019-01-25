#include <iostream>

int readInteger()
{
    std::cout << "Enter an integer: ";
    int input_integer;
    std::cin >> input_integer;
    return input_integer;
}

bool evalPrime(int x)
{
    if (x == 2)
        return true;
    else if (x == 3)
        return true;
    else if (x == 5)
        return true;
    else if (x == 7)
        return true;
    else
        return false;
    
}

int main()
{
    int prime_candidate = readInteger();
    if (evalPrime(prime_candidate))
        std::cout << "The digit is prime";
    else
        std::cout << "The digit is not prime";
    return 0;
}