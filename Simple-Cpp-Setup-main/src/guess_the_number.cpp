#include "guess_the_number.hpp"
#include <iostream>
#include "./lib/get_user_input.hpp"
#include "./lib/random.hpp"

void play_guess_the_number()
{
    //choose a random number between 0 and 100
    int myNumber = get_random_number<int>(0, 100);

    bool isFinished = false;

    while (!isFinished) {
        int userNumber = get_input_from_user<int>();
        if (userNumber == myNumber) {
            std::cout << "Congrats to you and your big brain " << std::endl;
            isFinished = true;
        }
        else if (userNumber > myNumber) {
            std::cout << "Ok bro, your number is too high " << std::endl;
        }
        else {
            std::cout << "Alright bro, your number is too low " << std::endl;
        }
    }
}