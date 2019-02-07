#include <iostream>

// IMPORTANT: It is necessary to declare the array size in the function declaration
void printElements(int (&arr)[4])
{
    int length{ sizeof(arr)/sizeof(arr[0]) }; // this is now possible since the array won't decay into a pointer

    for (int i{ 0 }; i < length; ++i)
        std::cout << arr[i] << std::endl;
}

int main()
{
    int arr[] { 99, 20, 14, 80 };

    printElements(arr);

    return 0;
    
}