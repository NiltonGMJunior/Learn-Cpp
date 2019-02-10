#include <array>

#ifndef IO_H
#define IO_H

void printCard(const Card &card); // Prints the card rank and suit as a two-letter code (e. g. Jack of Spades is JS) 
void printDeck(const std::array<Card, 52> &deck); // Prints the cards in the deck

#endif