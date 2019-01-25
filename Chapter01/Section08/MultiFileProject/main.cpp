#include <iostream>
// #include "add.cpp" // Not recommended as this includes all the contents of app.cpp in main.cpp, instead of treating them as separate files (WILL CAUSE TROUBLES WITH OTHER FUNCTIONS AND FILES DOWN THE LINE)
// At this time it is unknown if CodeRunner supports compiling and linking multiple files - I used the command gcc -o main *.cpp to create a main.exe with all .cpp files in the directory, this worked
int add(int x, int y); // needed so main.cpp knows that add() is a function declared elsewhere

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    return 0;
}