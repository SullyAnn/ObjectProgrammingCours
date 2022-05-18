#include "./lib/get_user_input.hpp"
#include "guess_the_number.hpp"
#include "hangman.hpp"
#include "check_user_input.hpp"

bool check_input_value(Command command)
{
    switch (command) {
    case Command::guess_the_number:
        play_guess_the_number();
        return true;
        break;
    case Command::hangman:
        play_hangman();
        return true;
        break;
    case Command::quit:
        exit(0);
        break;
    default:
        std::cout << "Sorry I don't know this command ! Try again..." << std::endl;
        return false;
        break;
    }
}