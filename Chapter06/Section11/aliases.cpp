#include <iostream>

int main()
{
    int value = 5; // normal integer
    int &ref = value; // ref is now an alias to value, they both share the same memory address

    value = 6; // value is now 6, and so is ref
    ref = 7; // ref is now 7, and so is value

    std::cout << value << '\n';
    ++ref;
    std::cout << value << '\n';

    return 0;
}