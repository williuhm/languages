/*
    Real examples of if/else statements.
*/

#include <iostream>
using namespace std;

int main() {
    int doorCode = 1337;

    if (doorCode == 1337) {
        cout << "Correct code.\nThe door is now open.\n";
    } else {
        cout << "Wrong code.\nThe door remains closed.\n";
    }

    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) {
        cout << "The value is a positive number.\n";
    } else if (myNum < 0) {
        cout << "The value is a negative number.\n";
    } else {
        cout << "The value is 0.\n";
    }

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        cout << "Old enough to vote!\n";
    } else {
        cout << "Not old enough to vote.\n";
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

    myNum = 5;

    if (myNum % 2 == 0) {
        cout << myNum << " is even.\n";
    } else {
        cout << myNum << " is odd.\n";
    }

    int temperature = 30; 

    if (temperature < 0) {
        cout << "It's freezing!\n";
    } else if (temperature < 20) {
        cout << "It's cool.\n";
    } else {
        cout << "It's warm.\n";
    }
    return 0;
}