#include <iostream>

namespace Animals
{
	enum Animals
	{
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		NUM_OF_ANIMALS
	};
}

int main()
{
	const int numOfLegs[Animals::NUM_OF_ANIMALS] = { 2, 4, 4, 4, 2, 0 };
	std::cout << "An elephant has " << numOfLegs[Animals::ELEPHANT] << " legs.\n";
	return 0;
}

