#include <iostream>

enum Color
{
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN
};

void printColor(Color color)
{
	switch(color)
	{
		case COLOR_BLACK:
			std::cout << "Black";
			break;
		case COLOR_WHITE:
			std::cout << "White";
			break;
		case COLOR_RED:
			std::cout << "Red";
			break;
		case COLOR_BLUE:
			std::cout << "Blue";
			break;
		case COLOR_GREEN:
			std::cout << "Green";
			break;
		default:
			std::cout << "Unknown";
			break;
	}
}

int main()
{
	printColor(COLOR_BLACK);
	return 0;
}

