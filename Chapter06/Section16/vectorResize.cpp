#include <vector>
#include <iostream>

int main()
{
	std::vector<int> array { 0, 1, 2 };
	array.resize(5);

	std::cout << "The length of the array is: " << array.size() << '\n';

	for (const auto &element : array)
		std::cout << element << ' ';

	return 0;
}

