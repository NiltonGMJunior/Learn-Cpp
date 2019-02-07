#include <iostream>
#include <string>
#include <limits>

// getLength reads user input and returns an integer greater than zero representing the ammount of names to be sorted
int getLength()
{
    while (true)
    {
        std::cout << "How many names would you like to enter? ";
        int namesLength;
        std::cin >> namesLength;

        if (std::cin.fail())
        {
            // In case cin fails to read an integer
            std::cin.clear(); // Resets cin to safe mode
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignores maximum ammount of input chars up until a new line is found
            std::cout << "INVALID INPUT!\n";
        }
        else
        {
            // In case cin succeeds in reading an integer value
            if (namesLength <= 0)
            {
                // In case input is an integer but is also invalid
                std::cout << "INVALID INPUT! PLEASE, ENTER A POSITIVE INTEGER!\n";
            }
            else
            {
                // In case input is valid, return it
                return namesLength;
            }
            
        }
    }
}

// getName returns a name as a string to be stored in the names array by the main function
std::string getName(int inputNum)
{
    while (true)
    {
        std::cout << "Enter name #" << inputNum << ": ";
        std::string name;
        std::cin >> name;

        if (std::cin.fail())
        {
            // In case cin fails to read a string
            std::cin.clear(); // Resets cin to safe mode
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignores maximum ammount of input chars up until a new line is found
            std::cout << "INVALID INPUT!\n";
        }
        else
        {
            return name;
        }
    }
}

// printSorted prints the sorted list
void printSorted(std::string *names, int lengthNames)
{
    std::cout << "Here is your sorted list:\n";
    for (int index = 0; index < lengthNames; ++index)
        std::cout << "Name #" << index + 1 << ": " << names[index] << '\n';
}

