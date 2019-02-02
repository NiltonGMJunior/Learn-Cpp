#include <iostream>
#include <utility>

int main()
{
	const int length = 9;
	int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	int numIterations = 0;
	

	for (int lastIndex = length; lastIndex > 0; --lastIndex)
	{
		++numIterations;
		for (int currentIndex = 0; currentIndex < lastIndex - 1; ++currentIndex)
		{
			if (array[currentIndex] > array[currentIndex + 1])
				std::swap(array[currentIndex], array[currentIndex + 1]);
		}

	}
	
	std::cout << "Num of iterations: " << numIterations << "\n";

	for (int index = 0; index < length; ++index)
		std::cout << array[index] << " ";

	return 0;
}

