/*
This file contains all input/output related functions
*/
#include <iostream>

double readDouble()
{
    std::cout << "Enter a double value: ";
    double doubleInput;
    std::cin >> doubleInput;
    return doubleInput;
}

char readOperator()
{
    std::cout << "Enter one of the following: +, -, * or /: ";
    char operatorInput;
    std::cin >> operatorInput;
    return operatorInput;
}

void writeAnswer(const double doubleInput1, const double doubleInput2, const char operatorInput)
{
    double answer;
    bool validOperator(true);
    if (operatorInput == '+')
        answer = doubleInput1 + doubleInput2;
    else if (operatorInput == '-')
        answer = doubleInput1 - doubleInput2;
    else if (operatorInput == '*')
        answer = doubleInput1 * doubleInput2;
    else if (operatorInput == '/')
        answer = doubleInput1 / doubleInput2;
    else
        validOperator = false;
    
    if (validOperator)
        std::cout << doubleInput1 << " " << operatorInput << " " << doubleInput2 << " is " << answer << std::endl; 
}