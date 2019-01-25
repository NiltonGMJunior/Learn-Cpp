#include "io.h"

int main()
{
    double doubleInput1, doubleInput2;
    char operatorInput;

    doubleInput1 = readDouble();
    doubleInput2 = readDouble();
    operatorInput = readOperator();
    writeAnswer(doubleInput1, doubleInput2, operatorInput);

    return 0;
}