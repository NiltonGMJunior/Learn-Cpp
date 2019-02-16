#include <array>

#ifndef CALCULATE_H
#define CALCULATE_H

void swapCards(Card &card1, Card &card2); // Swaps the ranks and suits of two cards
void shuffleDeck(std::array<Card, 52> &deck);
int getRandBetween(const int min, const int max);
int getCardValue(const Card &card);

#endif