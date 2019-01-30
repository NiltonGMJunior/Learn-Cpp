#include <iostream>

int main()
{
	enum class Color
	{
		RED,
		BLUE,
	};

	Color color = Color::RED;

	if (color == Color::RED)
		std::cout << "The color is red! \n";
	else if (color == Color::BLUE)
		std::cout << "The color is blue! \n";

	return 0;
}
