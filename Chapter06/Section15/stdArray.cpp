#include <iostream> 
#include <array> // for std::array
#include <algorithm> // for std::sort()

void printArray(const std::array<double, 5> &myArray)
{
    for (auto &element : myArray)
        std::cout << element << ' ';
    std::cout << '\n';
}

void printLength(const std::array<double, 5> &myArray) // Reference passing here prevents the function from making a copy of the array, minimizing space complexity
{
    std::cout << "Array length is: " << myArray.size() << '\n';
}

int main()
{
    std::array<double, 5> myArray { 9.0, 7.2, 5.4, 3.6, 1.8 };

    printLength(myArray);
    printArray(myArray);

    std::sort(myArray.begin(), myArray.end()); // sort the array forwards
    // std::sort(myArray.rbegin(), myArray.rend()); // sort the array backwards

    printArray(myArray);

    return 0;
}