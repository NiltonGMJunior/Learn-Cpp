#include <iostream>

int main()
{
    int value = 5; // Initializes an integer "value" to the value 5
    std::cout << "Value is: " << value << " and is stored in: " << &value << '\n';
    
    int *ptr = new int; // This allocates a memory capable of holding an integer in the heap and assigns it to pointer ptr
    std::cout << "ptr address is: " << ptr << " and the value stored in ptr is: " << *ptr << '\n';
    
    *ptr = value; // This stores the integer in the variable "value" in the memomy address pointed at by ptr
    std::cout << "Value is now: " << value << " and is now stored in: " << &value << '\n';
    std::cout << "ptr address is: " << ptr << " and the value stored in ptr is: " << *ptr << '\n';

    delete ptr; // This tells the operating system the memory previously allocated to the program as pointed by ptr is now relieved back to the OS
    std::cout << "Value is now: " << value << " and is now stored in: " << &value << '\n';
    std::cout << "ptr address is: " << ptr << " and the value stored in ptr is: " << *ptr << '\n';

    
    ptr = nullptr; // The pointer is now a null-pointer, and not a dangling pointer, i. e., a pointer that points to a memory not allocated to the program
    // ptr = 0; // If not c++11 compatible
    std::cout << "Value is now: " << value << " and is now stored in: " << &value << '\n';
    std::cout << "ptr address is: " << ptr << " and the value stored in ptr is: " << *ptr << '\n';

    return 0;

}