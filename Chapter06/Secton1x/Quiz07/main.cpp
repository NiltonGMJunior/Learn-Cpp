#include "main.h"
#include "io.h"
#include "calculate.h"
#include "game.h"
#include <array>
#include <iostream>
#include <ctime>

int main()
{

    std::srand(static_cast<int>(std::time(nullptr)));

    // The following initializes and fills a deck array of 52 cards with all 13 ranks and 4 suits
    std::array<Card, 52> deck;
    using index_t = std::array<Card, 52>::size_type;
    index_t card = 0;
    for (int suit = 0; suit < MAX_SUITS; ++suit)
    {
        for (int rank = 0; rank < MAX_RANKS; ++rank)
        {
            deck[card].suit = static_cast<CardSuit>(suit);
            deck[card].rank = static_cast<CardRank>(rank);
            ++card;
        }
    }

    // // The following tests the printDeck function (and, consequently, the printCard function) and also checks that the deck initialized above is correct
    // printDeck(deck);

    // // The following tests the swapCards function
    // Card card1, card2;
    // // card1 - AC
    // card1.rank = RANK_ACE;
    // card1.suit = SUIT_CLUBS;
    // // card2 - KH
    // card2.rank = RANK_KING;
    // card2.suit = SUIT_HEARTS;
    // // Prints cards' info before swap
    // printCard(card1);
    // std::cout << '\n';
    // printCard(card2);
    // std::cout << '\n';
    // // Swaps cards
    // swapCards(card1, card2);
    // // Prints cards' info after swap
    // printCard(card1);
    // std::cout << '\n';
    // printCard(card2);
    // std::cout << '\n';

    // // The following tests the shuffleDeck function
    // printDeck(deck); // Prints the deck before shuffling
    // shuffleDeck(deck); // Suffles the deck with the mersenne seed
    // std::cout << "\n";
    // printDeck(deck); // Prints deck after shuffling
    shuffleDeck(deck);
    bool gameResult = playBlackjack(deck);
    if (gameResult) std::cout << "Congratulations! You win!\n";
    else std::cout << "You lose! Better luck next time!\n";

    return 0;
}

