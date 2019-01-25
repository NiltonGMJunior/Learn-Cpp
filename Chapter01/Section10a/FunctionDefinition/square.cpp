// It would be okay to #include "square.h" here if needed
// This program doesn't need to

int getSquareSides() // actual definition fo getSquareSides()
{
    return 4;
}

int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}