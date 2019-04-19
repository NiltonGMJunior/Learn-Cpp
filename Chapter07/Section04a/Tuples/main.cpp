#include <tuple>
#include <iostream>

std::tuple<int, double> returnTuple()
{
    return std::make_tuple(5, 6.7); // std::make_tuple() is a shortcut to make a tuple to return
}

int main()
{
    std::tuple<int, double> s = returnTuple();
    std::cout << std::get<0>(s) << ' ' << std::get<1>(s) << '\n'; // use std::get<n>(s) to get the n-th element of the s tuple
    
    int a;
    double b;
    std::tie(a, b) = returnTuple(); // this puts the elements of the tuple in variables a and b
    std::cout << a << ' ' << b << '\n';

    // the following only works when compiling with argument -std=c++17
    auto [c, d] = returnTuple(); // used structured binding declaration to put results of tuple in variables c and d
    std::cout << c << ' ' << d << '\n';

    return 0;
}