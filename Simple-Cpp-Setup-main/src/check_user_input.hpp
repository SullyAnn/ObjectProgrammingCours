#ifndef CHECK_USER_INPUT
#define CHECK_USER_INPUT

enum class Command {
    guess_the_number = '1',
    hangman      = '2',
    quit         = 'q',
};

bool check_input_value(Command command);


#endif
