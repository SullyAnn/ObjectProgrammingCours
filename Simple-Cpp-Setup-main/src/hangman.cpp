#include "hangman.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include "./lib/get_user_input.hpp"
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

void show_number_of_lives(int number_of_life)
{
    std::cout << "You have lives " << number_of_life << " left " << std::endl;
}

bool is_player_alive(int number_of_life)
{
    return number_of_life > 0;
}

bool player_has_won(const std::vector<bool>& letters_guessed)
{
    return std::find(letters_guessed.begin(), letters_guessed.end(), false) == letters_guessed.end();
}

void show_word_to_guess_with_missing_letters(const std::string& word, const std::vector<bool>& letters_guessed)
{
    for (size_t i = 0; i < word.size(); i++) {
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
    for (size_t i = 0; i < word_to_guess.size(); i++) {
        if (word_to_guess[i] == guessed_letter) {
            letters_guessed[i] = true;
        }
    }
}

void remove_one_life(int& lives_count)
{
    lives_count -= 1;
}

void show_congrats_message(std::string word_to_guess)
{
    std::cout << "Congratulation you won dumb" << std::endl;
    std::cout << "You had to find the word " << word_to_guess << std::endl;
}

void show_defeat_message(std::string word_to_guess)
{
    std::cout << "BOOOH you loose dumb" << std::endl;
    std::cout << "You had to find the word " << word_to_guess << std::endl;
}

void play_hangman()
{
    std::string       word            = chose_random_word();
    int               number_of_lives = 8;
    std::vector<bool> letters_guessed(word.size(), false);

    while (is_player_alive(number_of_lives) && !player_has_won(letters_guessed)) {
        show_number_of_lives(number_of_lives);
        show_word_to_guess_with_missing_letters(word, letters_guessed);
        const char guess = get_input_from_user<char>();
        if (word_contains(guess, word)) {
            mark_as_guessed(guess, letters_guessed, word);
        }
        else {
            remove_one_life(number_of_lives);
        }
    }
    if (player_has_won(letters_guessed)) {
        show_congrats_message(word);
    }
    else {
        show_defeat_message(word);
    }
}