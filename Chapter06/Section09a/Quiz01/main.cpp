#include <iostream>
#include <string>
#include "io.h"
#include "calculate.h"

int main()
{
    int namesLength = getLength(); // Reads form the user the ammount of names to be sorted

    std::string *names = new std::string[namesLength]; // This creates a dynamic array of strings that will hold names as inputed by the user

    // Loops through each element in the names array and assigns them to user inputs as they are read
    for (int nameIndex = 0; nameIndex < namesLength; ++nameIndex)
    {
        names[nameIndex] = getName(nameIndex + 1); // Reads name from user and assigns it to the correct position in the names array
    }

    sortNames(names, namesLength); // Rearranges the names array in alphabetical order

    std::cout << '\n';

    printSorted(names, namesLength); // Prints out the names in alphabetical orders

    delete[] names; // Deallocate memory previously used bu names array
    names = nullptr; // Removes names pointer reference to previous memory address

    return 0;
}