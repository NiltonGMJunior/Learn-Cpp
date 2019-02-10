#include <iostream>

void intSwap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5;
    int y = 7;

    std::cout << "x = " << x << "; y = " << y << '\n';

    intSwap(x, y);

    std::cout << "x = " << x << "; y = " << y << '\n';

    return 0;
}