/*
    Identifiers are the names of variables. I know most
    of this because I've been trying to fight with it
    where "x" "y" and "z" are appearing in the same file.
*/

#include <iostream>
using namespace std;

int main() {
    // Good
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;
    return 0;
}

/*
    The general rules for naming variables are:
    - Names can contain letters, digits and underscores
    - Names must begin with a letter or an underscore (_)
    - Names are case-sensitive (myVar and myvar are different variables)
    - Names cannot contain whitespaces or special characters like !, #, %, etc.
    - Reserved words (like C++ keywords, such as int) cannot be used as names
*/