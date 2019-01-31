#include <iostream>

int sumTo(int limit)
{
	int sum = 0;
	for (int iii = 1; iii <= limit; iii++)
		sum += iii;
	return sum;
}

int main()
{
	std::cout << "Enter an integer limit: ";
	int limit;
	std::cin >> limit;

	std::cout << "The sum fo all integers from 1 to " << limit << " is: " << sumTo(limit) << "\n";
	return 0;
}

