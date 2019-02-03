#include <iostream>

int main()
{
	char name[255]; // array that can hold upt to 255 chars (including null-termiantor)
	std::cout << "What is your name? ";;
	std::cin.getline(name, 255); // reads up to 254 chars into name, reserving 1 char for the null terminator
	// everything else past the 254 chars is ignored and the array is not overflowed
	std::cout << "Your name is: " << name;
	return 0;
}

