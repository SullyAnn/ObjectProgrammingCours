#ifndef RANDOM
#define RANDOM
#include <iostream>
#include <random>

/// Returns a random int between min (included) and max (included)
template<typename T>
T get_random_number(T min, T max)
{
    static std::default_random_engine generator{std::random_device{}()};
    std::uniform_int_distribution<T>  distribution{min, max};
    return distribution(generator);
}

#endif
