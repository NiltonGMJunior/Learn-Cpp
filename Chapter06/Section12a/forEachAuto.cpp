#include <iostream>

int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (auto number : fibonacci) // auto lets the compiler decide which is the correct type for the array elements
		std::cout << number << " ";

	return 0;
}

