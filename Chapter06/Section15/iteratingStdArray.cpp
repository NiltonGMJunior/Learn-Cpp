#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> myArray{ 7, 3, 1, 9, 5 };

    using index_t = std::array<int, 5>::size_type; // This is used to make the iterable variable i in the for loop more readable
    for (index_t i{ 0 }; i < myArray.size(); ++i) // I fthe above line wasn't used, instead of index_t i{ 0 }, it would be necessary to write std::array<int, 5>::size_type i { 0 }
        std::cout << myArray[i] << ' ';

    return 0;
}