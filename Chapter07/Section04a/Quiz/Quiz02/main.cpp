#include <iostream>
#include <string>

struct Employee
{
    std::string name;
};

void printEmployeeName(const Employee &employee)
{
    std::cout << employee.name << '\n';
}

int main()
{
    Employee employee;
    employee.name = "Nilton";

    printEmployeeName(employee);

    return 0;
}