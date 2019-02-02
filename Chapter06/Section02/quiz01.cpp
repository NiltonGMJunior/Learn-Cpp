#include <iostream>

int main()
{
	float maxTemp[365] = {}; // Inititalizes an array of length 365 with all 0 elements

	/* INSERT CODE HERE */
	for (int iii = 0; iii < 365; iii++)
		std::cout << "Day:\t" << iii + 1 << "\tMax. temperature:\t" << maxTemp[iii] << "\n";
	return 0;
}
