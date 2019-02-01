#include <iostream>
#include "io.h"
#include <ctime>
// #include <cstdlib> // Used for srand() and rand()
#include <random>  // Used for mt19937 and uniform_int_distribution

// int generateRandomNumberVanilla(const int min, const int max)
// {
//     std::srand(static_cast<unsigned int>(std::time(nullptr))); // Generates seed based on clock for vanilla random number generator
//     const double fraction = 1.0 / (RAND_MAX + 1.0);
//     return static_cast<int>((std::rand() * fraction * (max - min + 1)));
// }

int generateRandomNumberMersenne(const int min, const int max)
{
    std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr))); // Generates a seed based on clock for Mersenne Twister random number generator 
    std::uniform_int_distribution<> die(min, max);
    return die(mersenne);
}

int main()
{
    bool replay = true;

    do
    {  
        std::cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is.\n";
        const int min = 1;
        const int max = 100;
        // int randomNumber = generateRandomNumberVanilla(min, max);
        int randomNumber = generateRandomNumberMersenne(min, max);
        
        for (int numOfAttempts = 1; numOfAttempts <= 7; ++numOfAttempts)
        {
            int userGuess = getUserGuess(numOfAttempts);
            printGuessEvaluation(userGuess, randomNumber);
            bool isGuessCorrect = evaluateGuess(userGuess, randomNumber);
            if (isGuessCorrect)
                break;
            if (numOfAttempts == 7)
                std::cout << "Sorry, you lose. The correct number was " << randomNumber << ".\n";
        }
        replay = playAgain();
    } while (replay);
    std::cout << "Thank you for playing!\n";
    
}