#include <cstdlib>
#include <iostream>

void cleanup()
{
	// Code to do any cleanup necessary
}

int main()
{
	std::cout << 1;
	cleanup();

	exit(0); // terminate and return 0 to operatiing system

	// The following statements never execute
	std::cout << 2;
	return 0;
}
