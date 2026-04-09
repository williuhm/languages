/*
    Nested if statements can also be written with one if statement
    that has an && operator... sometimes. I've had to use nested
    if statement before for sure.

    This is a good example actually.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 15;
    int y = 25;

    if (x > 10) {
        cout << "x is greater than 10\n";

        // Nested if
        if (y > 20) {
            cout << "y is also greater than 20\n";
        }
    }

    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
    cout << "Old enough to vote.\n";

        if (isCitizen) {
            cout << "And you are a citizen, so you can vote!\n";
        } else {
            cout << "But you must be a citizen to vote.\n";
        }
    } else {
        cout << "Not old enough to vote.\n";
    }
    return 0;
}