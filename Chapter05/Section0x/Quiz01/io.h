#ifndef IO_H
#define IO_H

double getInitialHeight(); // Reads initial height from user and return that value to the program
double calculateHeight(double initialHeight, double secondsPassed); // Calculates actual height based on inital height and time passed since ball dropped
void printHeight(double height, double secondsPassed); // Prints actual height along with time passed
// void calculateAndPrintHeight(double initialHeight, double secondsPassed);

#endif