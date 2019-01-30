#include <iostream>

void calculate(int num1, int num2, char op)
{
	switch(op)
	{
		case '+':
			std::cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
		case '-':
			std::cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
		case '*':
			std::cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
		case '/':
			std::cout << num1 << " / " << num2 << " = " << num1 / num2;
			break;
		default:
			std::cout << "Error! Invalid operator.";
			break;
	}
}

int main()
{
	calculate(5, 20, '*');
	return 0;
}
