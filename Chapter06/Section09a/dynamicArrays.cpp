#include <iostream>

int main()
{
    std::cout << "Enter a positive integer: ";
    int length;
    std::cin >> length;

    int *array = new int[length]; // Using array new. In this program, unlike previous implementations, length does NOT need to be constant

    std::cout << "I just allocated an array of integers of length: " << length << '\n';

    array[0] = 5; // set element 0 to value 5

    delete[] array; // array delete to deallocate array

    // there is no need to set array to nullptr or 0 because it's going to go out of scope immediately after this anyway, other wise the following line shoud be uncommented
    // array = nullptr;

    return 0;
}