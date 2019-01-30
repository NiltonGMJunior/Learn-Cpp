#include <iostream>

struct Employee
{
	short id;
	int age;
	float wage;
};

struct Company
{
	Employee CEO;
	int numberOfEmployees;
};

int main()
{
	Company myCompany = {{1, 42, 60000.0f}, 5};
	std::cout << "The CEO's wage is: " << myCompany.CEO.wage << std::endl;

	return 0;
}
