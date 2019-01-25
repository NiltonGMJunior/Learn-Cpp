#include <iostream>

int main()
{
    std::cout << "First line\nSecond line" << std::endl;
    
    std::cout << "First part\tSecond part" << std::endl;

    std::cout << "\"This is quoted text \"\n";
    std::cout << "This string contains a single backslash \\" << std::endl;
    std:: cout << "6F in hex is char \'\x6F\'" << std::endl;

    return 0;
}