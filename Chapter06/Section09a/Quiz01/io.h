#include <string>

#ifndef IO_H
#define IO_h

int getLength(); // This will return the number of names to be taken as input
std::string getName(int inputNum); // Returns the string with username for some input number up to the lenght of the names array
void printSorted(std::string *names, int lengthNames); // Prints the sorted list

#endif