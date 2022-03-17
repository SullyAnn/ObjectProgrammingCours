#include <iostream>
#include <random>
#include "guessTheNumber.hpp"

void pickAWord()
{
}

int main()
{
    /* ----------------- EX 1 : GUESS THE NUMBER -----------------------*/

    //choose a random number between 0 and 100
    int myNumber = rand(0, 100);

    //guess the user number
    bool isFinished = false;
    guessUserNumber(myNumber, isFinished);

    /* ----------------- EX 2 : HANGMAN -----------------------*/
}