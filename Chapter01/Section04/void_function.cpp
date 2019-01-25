#include <iostream>

void doPrint() // void is the return type
{
    std::cout << "In doPrint()" << std::endl;
    // This function does not return a value so no return statement is needed
}

int main(){
    doPrint();
    return 0;
}
