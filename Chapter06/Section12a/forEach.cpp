#include <iostream>

int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (int number : fibonacci)
		std::cout << number << " ";

	return 0;
}

