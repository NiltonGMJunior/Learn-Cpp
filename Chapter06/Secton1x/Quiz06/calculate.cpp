#include "main.h"
#include <utility>
#include <random>
#include <array>

void swapCards(Card &card1, Card &card2)
{
    std::swap(card1, card2);
}

void shuffleDeck(std::array<Card, 52> &deck, const std::mt19937 &mersenne)
{
	std::uniform_int_distribution<> die(1, 52); // Create a reusable random number generator that generates uniform numbers between 1 and 52
    
    // Loops through all cards in the deck and swaps the current card with a random card
    for (auto &card : deck)
    {
        swapCards(card, deck[die(mersenne) - 1]); // Indexing deck with die(mersenne) - 1 because die(mersenne) generates a random number in the interval [1, 52]
    }
}

int getRandomNumber(const int min, const int max)
{
    
}