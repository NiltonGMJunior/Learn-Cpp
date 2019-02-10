#include <iostream>

void printCharArray(const char *string)
{
    for (int index { 0 }; string[index] != '\0'; ++index)
        std::cout << string[index];
}

int main()
{
    const char *string = "Hello World!";
    printCharArray(string);
    return 0;
}