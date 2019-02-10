#include <iostream>
#include <limits>
#include "main.h"

int getNumStudents()
{
    while (true)
    {
        std::cout << "Enter number of students: ";
        int numStudents;
        std::cin >> numStudents;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (numStudents > 0)
            return numStudents;
        
        std::cout << "INVALID INPUT! PLEASE, ENTER A POSITIVE INTEGER.\n";
    }
}

std::string getFirstName()
{
    while (true)
    {
        std::cout << "Enter the student's first name: ";
        std::string firstName;
        std::cin >> firstName;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
            return firstName;
        
        std::cout << "INVALID INPUT! PLEASE, ENTER A VALID FIRST NAME.\n";
    }
}

int getGrade()
{
    while (true)
    {
        std::cout << "Enter the student's grade [0-100]: ";
        int grade;
        std::cin >> grade;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
            return grade;
        
        std::cout << "INVALID INPUT! PLEASE, ENTER AN INTEGER IN THE INTERVAL [0-100].\n";
    }
}

void printStudents(Student *students, const int numStudents)
{
    for (int index { 0 }; index < numStudents; ++index)
        std::cout << students[index].firstName << " got a grade of " << students[index].grade << ".\n";
}