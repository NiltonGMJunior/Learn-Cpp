#include <iostream>

int main()
{
	struct Employee
	{
		short id;
		int age;
		double wage;
	};

	/* The following show an example of initializing structs members values individually */

	Employee joe;
	joe.id = 14;
	joe.age = 32;
	joe.wage = 24.15;

	Employee frank;
	frank.id = 15;
	frank.age = 28;
	frank.wage = 18.27;
	
	
	/* The following is an example of initializing structs with an initializer list */

	Employee dwight { 1, 32, 60000 };
	

	int totalAge = joe.age + frank.age;

	if (joe.wage > frank.age)
		std::cout << "Joe makes more than Frank\n";
	else if (joe.wage < frank.age)
		std::cout << "Joe makes less than Frank\n";
	else
		std::cout << "Joe and Frank make the same ammount\n";

	frank.wage += 2.50;

	++joe.age;

	return 0;

}

