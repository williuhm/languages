/*
    This is the thing I've heard is very difficult
    in C, so I'm worried about it here as well...

    That was way too short of a tutorial for what
    these things can actually do from what I've 
    heard about.

    Never mind, there's a second tab...
*/

#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; // Outputs Burger
    cout << meal << "\n"; // Outputs Burger
    return 0;
}