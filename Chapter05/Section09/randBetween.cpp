#include <iostream>
#include <cstdlib>
#include <ctime>

int getIntBetween(int min, int max)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	static const double fraction = 1.0 / (RAND_MAX + 1.0); // static used for efficiency, so the value is only calculated once

	return min + static_cast<int>((std::rand() * fraction) * (max - min + 1));
}

int main()
{

	std::cout << "This program prints a random integer between two other integers (inclusive).\n";

	std::cout << "Enter the lower limit integer: ";
	int lowerLimit;
	std::cin >> lowerLimit;

	std::cout << "Enter the upper limit integer: ";
	int upperLimit;
	std::cin >> upperLimit;

	std::cout << "The random integer generated between " << lowerLimit << " and " << upperLimit << " is: " << getIntBetween(lowerLimit, upperLimit) << "\n";
	return 0;
}

