#include <iostream>
#include <iterator> // Compile with -std=c++17

int main()
{
	char myString[] = "string"; // Creates a char array with 7 elements: {'s', 't', 'r', 'i', 'n', 'g', '\0'}
	// The above declaration automatically includes '\0' at the end of the array. That is the null-termiantor
	
	const int length = std::size(myString); 
	// const int length = sizeof(myString) / sizeof(myString[0]); // if not C++17 compatible
	
	std::cout << myString << " has " << length << " characters.\n";

	for (int index = 0; index < length; ++index)
		std::cout << static_cast<int>(myString[index]) << " ";

	return 0;
}
