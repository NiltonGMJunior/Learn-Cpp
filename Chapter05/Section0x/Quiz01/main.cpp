#include "io.h"

int main()
{
    const double initialHeight = getInitialHeight();
    double height;
    int secondsPassed = 0;

    do
    {
        height = calculateHeight(initialHeight, secondsPassed);
        printHeight(height, secondsPassed);
        ++secondsPassed;
    } while (height > 0.0);
    
    return 0;
}