#include <iostream>

int main()
{
    int integer_value; // DECLARATION of integer_value
    integer_value = 5; // COPY ASSIGNMENT of 5 to integer_value

    int another_integer = 10; // COPY INITIALIZATION OF another_integer

    // The following method of initialization is prefered
    int yet_another_integer(20); // DIRECT INITIALIZATION of yet_another_integer

    int value{5}; // UNIFORM INITIALIZATION 

    std::cout << integer_value << std::endl;
    std::cout << another_integer << std::endl;
    std::cout << yet_another_integer << std::endl;
}