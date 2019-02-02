#include <iostream>
#include <iterator>
#include <limits>

// getDigit returns an integer in the interval [1-9]
int getDigit()
{
	while (true)
	{
		std::cout << "Enter an integer in the range [1-9]: ";
		int digit;
		std::cin >> digit;

		if (std::cin.fail())
		{
			std::cin.clear(); // Returns cin to safe mode
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignores the maximum ammount of characters possible up until a new line is found
		}
		else if (digit >= 1 && digit <= 9)
			return digit;
		
		std::cout << "INVALID INPUT! Please try again.\n";
	}
}

int main()
{
	int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 }; // Base array for this quiz
	const int lengthArray = std::size(array);

	int userDigit = getDigit(); // userDigit is the input digit from the user
	// Loops until the userDigit is found in the array, at which point the index is printed and the loop is finished
	for (int iii = 0; iii < lengthArray; iii++)
		if (array[iii] == userDigit)
			std::cout << "The index of element " << userDigit << " is: " << iii << "\n";

	return 0;
}


	
