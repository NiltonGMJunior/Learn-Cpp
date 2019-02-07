#include <iostream>

int main()
{
	int array[5] { 9, 7, 5, 3, 1 };
	for (const auto &ref : array) // if array elements are non-fundamental types (such as structs) using references or const references is prefered for performance (in this specific case, const isn't necessary since array elements are integers)
		std::cout << ref << ' ';

	return 0;
}

