#include <iostream>
#include <array>
#include "main.h"

void printCard(const Card &card)
{
    switch (card.rank)
    {
        case RANK_TWO:      std::cout << '2'; break;
        case RANK_THREE:    std::cout << '3'; break;
        case RANK_FOUR:     std::cout << '4'; break;
        case RANK_FIVE:     std::cout << '5'; break;
        case RANK_SIX:      std::cout << '6'; break;
        case RANK_SEVEN:    std::cout << '7'; break;
        case RANK_EIGHT:    std::cout << '8'; break;
        case RANK_NINE:     std::cout << '9'; break;
        case RANK_TEN:      std::cout << 'T'; break;
        case RANK_JACK:     std::cout << 'J'; break;
        case RANK_QUEEN:    std::cout << 'Q'; break;
        case RANK_KING:     std::cout << 'K'; break;
        case RANK_ACE:      std::cout << 'A'; break;
        default:            std::cout << '?'; break;
    }

    switch (card.suit)
    {
        case SUIT_CLUBS:    std::cout << 'C'; break;
        case SUIT_DIAMONDS: std::cout << 'D'; break;
        case SUIT_HEARTS:   std::cout << 'H'; break;
        case SUIT_SPADES:   std::cout << 'S'; break;
        default:            std::cout << '?'; break;
    }
}

void printDeck(const std::array<Card, 52> &deck)
{
    for (auto &card : deck)
    {
        printCard(card);
        std::cout << ' ';
    }
}