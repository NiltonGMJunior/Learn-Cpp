#include <string>

#ifndef IO_H
#define IO_H

int getNumStudents(); // Reads an integer from the console determining the number of students
std::string getFirstName(); // Reads the student's first name from the console
int getGrade(); // Reads the students grade from the console
void printStudents(Student *students, const int numStudents); // Prints students' informations

#endif