#include <iostream>
#include <tuple>

std::tuple<int, int> minmax(const int a, const int b)
{
    return (a >= b) ? std::make_tuple(b, a) : std::make_tuple(a, b);
}

int main()
{
    int a { 5 };
    int b { 10 };

    std::tuple<int, int> min_max = minmax(a, b);
    // Alternatives:
    // std::tie(min, max) = minmax(a, b);
    // auto [min, max] = minmax(a, b);


    std::cout << "Min: " << std::get<0>(min_max) << " / Max: " << std::get<1>(min_max) << "\n";

    return 0;
}