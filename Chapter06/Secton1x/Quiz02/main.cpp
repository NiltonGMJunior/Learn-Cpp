#include "main.h"
#include "io.h"
#include "calculate.h"
#include <iostream>
#include <string>

int main()
{
    const int numStudents = getNumStudents();
    Student *students = new Student[numStudents];

    for (int index { 0 }; index < numStudents; ++index)
    {
        students[index].firstName = getFirstName();
        students[index].grade = getGrade();
    }

    sortByGrade(students, numStudents);

    std::cout << '\n';

    printStudents(students, numStudents);

    delete[] students;
    students = nullptr;

    return 0;

}