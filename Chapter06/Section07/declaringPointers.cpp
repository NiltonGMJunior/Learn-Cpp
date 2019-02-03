#include <iostream>

int main()
{
	int value = 5;
	int *ptr = &value; // initializes ptr with the address of variable value

	std::cout << &value << '\n';
	std::cout << ptr << '\n';

	return 0;
}

