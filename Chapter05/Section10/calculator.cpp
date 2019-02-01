#include <iostream>
#include <limits>

double getDouble()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter a double value: ";
        double x;
        std::cin >> x;

        // Check for failed extraction
        if (std::cin.fail()) // Checks if a previous extraction failed
        {
            // In case a previous extraction failed
            std::cin.clear(); // Exits cin fail mode and goes back to safe mode
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignores all input from stream up until a new line is found
            std::cout << "Oops, that input is invalid. Please try again.\n";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Removes any extra input
            // User can't enter a meaningless double value, so no handling of the sort is necessary
            return x;
        }
    }
}

char getOperator()
{
    while(true) // Loop until user enters a valid input
    {
        std::cout << "Enter one of the following: +, -, * or /: ";
        char op;
        std::cin >> op;

        // Chars can accept any single input character, so no need to check for an invalid extraction here

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Removes extraneous input

        // Check wether the user entered meaningful input
        if (op == '+' || op == '-' || op == '*' || op == '/')
            return op;
        else
            std::cout << "Oops, that input is invalid. PLease try again.\n";
    }
}

void printResult(double x, char op, double y)
{
    if (op == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y << " is " << x + y << '\n';
    else // Being robust means handling unexpected parameters as well, even though getOperator() guarantees op is valid in this particular program
        std::cout << "Something went wrong: printResult() got an invalid operator.";
}

int main()
{
    double x = getDouble();
    char op = getOperator();
    double y = getDouble();

    printResult(x, op, y);

    return 0;
}