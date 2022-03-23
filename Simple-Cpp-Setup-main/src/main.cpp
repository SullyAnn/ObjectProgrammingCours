#include <iostream>
#include <string>
#include <vector>
#include "./lib/random.hpp"
#include "guess_the_number.hpp"

std::string chose_random_word()

{
    std::vector<std::string> word_list = {
        "carbonara",
        "spaghetti",
        "boulettes",
        "chips",
        "manger",
        "baguette",
        "poisson",
        "raclette",
        "tartiflette",
        "fondue",
        "kouign-amann",
    };

    int random_number = get_random_number<int>(0, word_list.size() - 1);
    std::cout << word_list[random_number] << std::endl;

    return word_list[random_number];
}

int main()
{
    /* ----------------- EX 1 : GUESS THE NUMBER -----------------------*/
    play_guess_the_number();

    /* ----------------- EX 2 : HANGMAN -----------------------*/
    //chose_random_word();
}