#include <iostream>
#include "add.h"
// At this time it is unknown if CodeRunner supports compiling and linking multiple files - I used the command gcc -o main *.cpp to create a main.exe with all .cpp files in the directory, this worked

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    return 0;
}