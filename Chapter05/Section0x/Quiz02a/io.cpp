#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>

int getUserGuess(int numOfAttempts)
{
    while (true)
    {
        std::cout << "Guess #" << numOfAttempts << ": ";
        int userGuess;
        std::cin >> userGuess;

        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
        }
        else
        {
            if (userGuess >= 1 && userGuess <= 100)
                return userGuess;
        }
        
        std::cout << "Invalid input! Please, enter an integer in the interval [1, 100].\n";
    }
}

bool playAgain()
{
    while (true)
    {
        std::cout << "Would you like to play again (y/n)? ";
        char userInput;
        std::cin >> userInput;

        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
        }
        else if (userInput == 'y' || userInput == 'Y')
            return true;
        else if (userInput == 'n' || userInput == 'N')
            return false;
        
        std::cout << "Invalid input! Select 'y' or 'n'.\n";
    }
}

void printGuessEvaluation(int userGuess, int randomNumber)
{
    if (userGuess == randomNumber)
        std::cout << "Correct! You win!\n";
    else if (userGuess > randomNumber)
        std::cout << "Your guess is too high.\n";
    else
        std::cout << "Your guess is too low.\n";
}

bool evaluateGuess(int userGuess, int randomNumber)
{
    return (userGuess == randomNumber) ? true : false;
}


