#include <iostream>

int getIndexOfLargestValue(const int *arr, const unsigned int arr_size)
{
    unsigned int ind_max { 0 };
    for (unsigned int iii = 1; iii < arr_size; ++iii)
        if (arr[iii] > arr[ind_max])
            ind_max = iii;
    return ind_max;
}

int main()
{
    unsigned int arr_size = 6;
    int *arr = new int[arr_size] { 0, 9, 6, 5, 18, 3};

    std::cout << "Index of largest element: " << getIndexOfLargestValue(arr, arr_size) << '\n';

    return 0;
}