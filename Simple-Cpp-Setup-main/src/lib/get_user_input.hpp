#ifndef GET_USER_INPUT
#define GET_USER_INPUT

#include <iostream>

template<typename T>
T get_input_from_user()
{
    std::cout << "enter an input : " << std::endl;
    T user_input;
    std::cin >> user_input;

    return user_input;
}

#endif
