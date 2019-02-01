#ifndef IO_H
#define IO_H

int getUserGuess(int numOfAttempts);
bool playAgain();
void printGuessEvaluation(int userGuess, int randomNumber);
bool evaluateGuess(int userGuess, int randomNumber);

#endif