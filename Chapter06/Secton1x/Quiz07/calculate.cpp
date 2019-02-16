#include "main.h"
#include "calculate.h"
#include <utility>
#include <array>
#include <cstdlib>

void swapCards(Card &card1, Card &card2)
{
    std::swap(card1, card2);
}

void shuffleDeck(std::array<Card, 52> &deck)
{   
    // Loops through all cards in the deck and swaps the current card with a random card
    for (auto &card : deck)
    {
        swapCards(card, deck[getRandBetween(0, 52)]); // Indexing deck with die(mersenne) - 1 because die(mersenne) generates a random number in the interval [1, 52]
    }
}

int getRandBetween(const int min, const int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0); // static used for efficiency, so the value is only calculated once
    
    return min + static_cast<int>((std::rand() * fraction) * (max - min + 1));
}

int getCardValue(const Card &card)
{
    int cardValue;
    switch (card.rank)
    {
        case RANK_TWO:      return 2; break;
        case RANK_THREE:    return 3; break;
        case RANK_FOUR:     return 4; break;
        case RANK_FIVE:     return 5; break;
        case RANK_SIX:      return 6; break;
        case RANK_SEVEN:    return 7; break;
        case RANK_EIGHT:    return 8; break;
        case RANK_NINE:     return 9; break;
        case RANK_TEN:      
        case RANK_JACK:     
        case RANK_QUEEN:    
        case RANK_KING:     return 10; break;
        case RANK_ACE:      return 11; break;
    }
    return 0;
}