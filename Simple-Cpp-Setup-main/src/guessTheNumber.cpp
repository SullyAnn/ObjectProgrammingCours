#include "guessTheNumber.hpp"
#include <iostream>
#include <random>

/// Returns a random int between min (included) and max (included)
int rand(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int getUserNumber()
{
    std::cout << "enter an integer number to guess my number: " << std::endl;

    int userNumber = 0;
    std::cin >> userNumber;

    return userNumber;
}

void guessUserNumber(int myNumber, bool isFinished)
{
    while (!isFinished) {
        int userNumber = getUserNumber();
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