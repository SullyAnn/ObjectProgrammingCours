#include "guess_the_number.hpp"
#include <iostream>
#include <random>

/// Returns a random int between min (included) and max (included)

int get_random_number(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int get_user_number()
{
    std::cout << "enter an integer number to guess my number: " << std::endl;

    int userNumber = 0;
    std::cin >> userNumber;

    return userNumber;
}

void play_guess_the_number()
{
    //choose a random number between 0 and 100
    int myNumber = get_random_number(0, 100);

    //guess the user number
    bool isFinished = false;

    while (!isFinished) {
        int userNumber = get_user_number();
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