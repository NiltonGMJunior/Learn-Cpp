#include <iostream>

int main()
{
	bool inBigClassroom = false;
	const int classSize = inBigClassroom ? 30 : 20;
	std::cout << "The class size is: " << classSize << std::endl;
	return 0;
}