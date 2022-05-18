#include <iostream>
#include <string>
#include <vector>
/* ds un tableau ac commandes*/



void show_the_list_of_commands()
{
    std::vector<std::string> game_list{
    "1: Play 'Guess the Number'",
    "2: Play 'Hangman'",
    "q: Quit",
    };

    for(size_t i =0 ; i<game_list.size(); i++){
        std::cout << game_list[i] << std::endl;
    }
}

