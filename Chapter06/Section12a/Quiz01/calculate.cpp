#include <string>

static const int namesLength = 8;
static const std::string names[namesLength] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

bool isNameInArray(const std::string nameInput)
{
    for (const auto &name : names)
    {
        if (nameInput == name)
            return true;
    }

    return false;
}