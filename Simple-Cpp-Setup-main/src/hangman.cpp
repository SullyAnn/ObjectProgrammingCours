#include "hangman.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include "./lib/random.hpp"

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

void show_number_of_life(int number_of_life)
{
    std::cout << "You have " << number_of_life << " left";
}

bool is_player_alive(int number_of_life)
{
    return number_of_life > 0;
}

bool player_has_won(const std::vector<bool>& letters_guessed)
{
    bool is_false = false;
    if (std::binary_search(letters_guessed.begin(), letters_guessed.end(), is_false)) {
        std::cout << "You won !!";
        return true;
    }
    else {
        std::cout << "Try again noob";
        return false;
    }
}

void show_word_to_guess_with_missing_letters(const std::string& word, const std::vector<bool>& letters_guessed)
{
    for (size_t i = 0; i < word.length(); i++) {
        if (letters_guessed[i]) {
            std::cout << word[i];
        }
        else {
            std::cout << "_";
        }
    }
}

bool word_contains(char letter, std::string word)
{
    if (word.find(letter) != std::string::npos) {
        std::cout << "Congrats there is a " << letter << std::endl;
        return true;
    }
    else {
        std::cout << "Unforntunately there is no " << letter << std::endl;
        return false;
    }
}

void mark_as_guessed(char guessed_letter, std::vector<bool>& letters_guessed, std::string word_to_guess)
{
}