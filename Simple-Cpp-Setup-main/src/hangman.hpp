#ifndef HANGMAN
#define HANGMAN
#include <string>
#include <vector>

std::string chose_random_word();
void        show_number_of_lives(int number_of_life);
bool        is_player_alive(int number_of_life);
bool        player_has_won(const std::vector<bool>& letters_guessed);
void        show_word_to_guess_with_missing_letters(const std::string& word, const std::vector<bool>& letters_guessed);
bool        word_contains(char letter, std::string word);
void        mark_as_guessed(char guessed_letter, std::vector<bool>& letters_guessed, std::string word_to_guess);
void        remove_one_life(int& lives_count);
void        show_congrats_message(std::string word_to_guess);
void        show_defeat_message(std::string word_to_guess);
void        play_hangman();

#endif
