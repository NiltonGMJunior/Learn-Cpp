#include <iostream>

int main()
{
    int value = 5;
    void *voidPtr = &value; // voidPtr points to value's memory address
    // The above implies that dereferencing can't be done as usual, i. e., *voidPtr will NOT yield 5, the following must be done
    int *intPtr = static_cast<int*>(voidPtr); // voidPtr is now cast to an integer pointer (intPtr)
    std::cout << "Value is: " << *intPtr << '\n';

    return 0;
    
}
