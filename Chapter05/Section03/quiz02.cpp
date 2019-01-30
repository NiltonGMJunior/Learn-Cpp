#include <iostream>
#include <string>

enum class Animals
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH
};

std::string getAnimalName(Animals animal)
{
	switch(animal)
	{
		case Animals::PIG:
			return "pig";
			break;
		case Animals::CHICKEN:
			return "chicken";
			break;
		case Animals::GOAT:
			return "goat";
			break;
		case Animals::CAT:
			return "cat";
			break;
		case Animals::DOG:
			return "dog";
			break;
		case Animals::OSTRICH:
			return "ostrich";
			break;
		default:
			return "UNDEFINED";
			break;
	}
}

void printNumberOfLegs(Animals animal)
{
	int numberOfLegs { 0 };

	switch(animal)
	{
		case Animals::PIG:
		case Animals::GOAT:
		case Animals::CAT:
		case Animals::DOG:
			numberOfLegs = 4;
			break;
		case Animals::CHICKEN:
		case Animals::OSTRICH:
			numberOfLegs = 2;
			break;
	}
	
	if (numberOfLegs != 0)
		std::cout << "A " << getAnimalName(animal) << " has " << numberOfLegs << " legs.\n";
	else
		std::cout << "Error! Undefined animal.";
}

int main()
{
	printNumberOfLegs(Animals::CAT);
	printNumberOfLegs(Animals::CHICKEN);
	return 0;
}
