#include "io.h"

int main()
{
    int user_input1 = readNumber(); // First integer input
    int user_input2 = readNumber(); // Second integer input
    
    writeAnswer(user_input1, user_input2);
    
    return 0;
}