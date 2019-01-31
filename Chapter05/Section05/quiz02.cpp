#include <iostream>

int getASCII(char ch)
{
	return static_cast<int>(ch);
}

char getChar(int asciiCode)
{
	return static_cast<char>(asciiCode);
}

int main()
{
	char startChar {'a'};
	char endChar {'z'};

	int counterASCII = getASCII(startChar);
	int endASCII = getASCII(endChar);
	
	while (counterASCII <= endASCII)
		std::cout << getChar(counterASCII) << " : " << counterASCII++ << "\n";

	return 0;
}
