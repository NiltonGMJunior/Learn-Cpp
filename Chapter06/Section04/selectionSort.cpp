#include <iostream>
#include <utility>

int main()
{
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };

	// Step through each element of the array
	// except for the last one, which will be already sorted by the time the algorithm reaches it
	
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we've encountered this iteration
		// start assuming the smallest element is the first element of this iteration
		int smallestIndex = startIndex;

		// then look for a smaller element in the rest of the array
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// If we've found an element that is smaller than the previously found smallest
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}

		// smallestIndex is now the smallest element in the remaining array
		// swap the starting element with the smallest element, sorting it in the correct place
		std::swap(array[startIndex], array[smallestIndex]);
	}

	// Now that the array is sorted, print out its elements to verify that
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << " ";

	return 0;
}	

