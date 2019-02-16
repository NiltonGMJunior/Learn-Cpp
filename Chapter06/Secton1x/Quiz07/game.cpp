#include "io.h"
#include "calculate.h"
#include "main.h"
#include <iostream>
#include <array>

bool playBlackjack(std::array<Card, 52> &deck)
{
    Card *curCard = &deck[0]; // Initializes curCard pointer

    // Gets dealer's first card and moves over one position of the pointer
    int dealerValue = getCardValue(*curCard); 
    curCard++;

    // Gets player's two cards and moves over two positions of the pointer
    int playerValue = getCardValue(*curCard) + getCardValue(*(curCard + 1));
    curCard += 2;

    // Increments playerValue until player decides to stand or playerValue is greater than 21 (bust!)
    bool playerChoice;
    
    do
    {
        playerChoice = playerStands(playerValue, dealerValue);
        if (!playerChoice)
        {
            std::cout << "Player hits!\n";
            playerValue += getCardValue(*curCard);
            curCard++;
            if (playerValue > 21)   
            {
                std::cout << "Player busts with " << playerValue << "!\n";
                return false; // Player busts!
            }
        }
        else std::cout << "Player stands with " << playerValue << ".\n";
    } while (!playerChoice);

    while (dealerValue < 17)
    {
        std::cout << "Dealer hits!\n";
        dealerValue += getCardValue(*curCard);
        curCard++;
        if (dealerValue > 21)
        {
            std::cout << "Dealer busts with " << dealerValue << "!\n";
            return true; // Player busts!
        }
        std::cout << "Dealer now has " << dealerValue << ".\n";
    }

    std::cout << "Dealer stands with " << dealerValue << ".\n";

    if (dealerValue >= playerValue) return false;
    
    return true;
}