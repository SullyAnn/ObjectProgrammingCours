#include <iostream>
#include <string>
#include <vector>
#include "./lib/random.hpp"
#include "guess_the_number.hpp"
#include "hangman.hpp"
#include "menu.hpp"
#include "./lib/get_user_input.hpp"
#include "check_user_input.hpp"

int main()
{
    /* -------------------- EX 3 : MENU -----------------------*/
    /* Permits to play at Guess the number and Hangman  */

    bool quit = false;
    while (!quit) {
        show_the_list_of_commands();
        const auto command = get_input_from_user<char>();
        quit = check_input_value(static_cast<Command>(command));
    }
}