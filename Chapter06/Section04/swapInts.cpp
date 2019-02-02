#include <iostream>
#include <utility> // Only for C++11, otherwise, use <algorithm> for std::swap()

int main()
{
	int x = 2;
	int y = 4;
	std::cout << "Before swap: x = " << x << ", y = " << y << "\n";
	std::swap(x, y); // Swap the values of x and y
	std::cout << "After swap: x = " << x << ", y = " << y << "\n";
	return 0;
}

