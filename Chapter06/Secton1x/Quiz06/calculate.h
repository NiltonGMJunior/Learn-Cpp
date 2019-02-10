#include <array>
#include <random>

#ifndef CALCULATE_H
#define CALCULATE_H

void swapCards(Card &card1, Card &card2); // Swaps the ranks and suits of two cards
void shuffleDeck(std::array<Card, 52> &deck, const std::mt19937 &mersenne);
int getRandomNumber(const int min, const int max);

#endif