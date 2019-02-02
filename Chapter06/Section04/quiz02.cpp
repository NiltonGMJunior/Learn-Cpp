#include <iostream>
#include <utility> // for std::swap()

int main()
{
	const int length = 6;
	int array[length] = { 30, 60, 20, 50, 40, 10 };

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int largestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] > array[largestIndex])
				largestIndex = currentIndex;
		}
		
		std::swap(array[startIndex], array[largestIndex]);
	}

	for (int index = 0; index < length; ++index)
		std::cout << array[index] << " ";

	return 0;
}

