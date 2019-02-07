#include <iostream>

int main()
{
    int nArray[5] = { 9, 7, 5, 3, 1 };
    char cArray[] = "Hello!";
    const char *name = "Alex";

    std::cout << nArray << '\n';
    std::cout << cArray << '\n';
    std::cout << name << '\n';

    return 0;
}