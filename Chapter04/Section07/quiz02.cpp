#include <iostream>

struct Fraction
{
	int numerator;
	int denominator;
};

Fraction getFraction()
{
	Fraction temp;
	std::cout << "Enter fraction numerator: ";
	std::cin >> temp.numerator;
	std::cout << "Enter fraction denominator: ";
	std::cin >> temp.denominator;

	return temp;
}

void multiply(Fraction fraction1, Fraction fraction2)
{
	int numeratorProd, denominatorProd;
	numeratorProd = fraction1.numerator * fraction2.numerator;
	denominatorProd = fraction1.denominator * fraction2.denominator;

	float result = static_cast<float>(numeratorProd) / denominatorProd;

	std::cout << fraction1.numerator << "/" << fraction1.denominator << " * " << fraction2.numerator << "/" << fraction2.denominator << " = " << result;
}

int main()
{
	Fraction fraction1, fraction2;
	fraction1 = getFraction();
	fraction2 = getFraction();
	multiply(fraction1, fraction2);

	return 0;
}
