#include <iostream>

struct Rectangle
{
	double length = 1.0;
	double width = 1.0;
};

int main()
{
	Rectangle x; // This initializes x with x.length = 1.0 and x.width = 1.0
	x.length = 2.0; // This overwrites x.length to be 2.0 instead of 1.0

	std::cout << "x's length is: " << x.length << " and x's width is: " << x.width << std::endl;

	return 0;
}
