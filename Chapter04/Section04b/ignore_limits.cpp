#include <iostream>
#include <string>

int main()
{
	std::cout << "Pick 1 or 2:"; 
	int choice { 0 };
	std::cin >> choice;
 	
	std::cin.ignore(32767, '\n'); // Ignores up ot 32767 characters until a \n is removed

	std::cout << "Now enter your name: ";
	std::string name;
	std::getline(std::cin, name);

	std::cout << "Hello, " << name << ", you picked " << choice << "\n";
 

	return 0;
}

