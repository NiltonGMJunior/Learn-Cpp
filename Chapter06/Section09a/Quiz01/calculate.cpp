#include <iostream>
#include <string>
#include <utility>

// sortNames returns an array of sorted names 
void sortNames(std::string *names, int lengthNames)
{
    // Selection sorts the names array
    for (int startIndex = 0; startIndex < lengthNames - 1; ++startIndex)
    {
        int lowestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < lengthNames; ++currentIndex)
        {
            if (names[currentIndex] < names[lowestIndex])
                lowestIndex = currentIndex;
        }
        std::swap(names[lowestIndex], names[startIndex]);
    }
}