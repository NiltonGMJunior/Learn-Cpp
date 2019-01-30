#include <iostream>

struct Employee
{
	short id;
	int age;
	double wage;
};

void printInformation(Employee employee)
{
	{
		using namespace std;
		cout << "Id: " << employee.id << endl;
		cout << "Age: " << employee.age << endl;
		cout << "Wage: " << employee.wage << endl;
	}
}

int main()
{
	Employee joe { 14, 32, 24.15 };
	Employee frank { 15, 28, 18.27 };

	// Print Joe's information
	printInformation(joe);

	std::cout << '\n';

	// Print Frank's information
	printInformation(frank);

	return 0;

}
