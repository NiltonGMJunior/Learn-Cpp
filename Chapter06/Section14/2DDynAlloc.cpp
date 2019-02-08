#include <iostream>

int main()
{

    // THREE POSSIBLE WAYS OF DYNAMIC ALLOCATING TWO-DIMENSIONAL ARRAYS

    // NO. 1
    int (*array)[5] = new int[10][5]; // This only works if the rightmost term of the assignment is compile-time constant
    
    // NO. 2
    auto array = new int[10][5]; // This is preferable in case of C++11 compliant compliers, but only works with compile-time constants as well

    // NO. 3
    int **array = new int[10]; // First, an array of pointers is allocated
    for (int count = 0; count < 10; ++count)
        array[count] = new int[5]; // Then we iterate through the array assigning a memory address for an array to each pointer in the array
    
    // Deallocating a dynamically allocated array also requires a loop
    for (int count = 0; count < 10; ++count)
        delete[] array[count];
    delete array[];
    
    return 0;


}