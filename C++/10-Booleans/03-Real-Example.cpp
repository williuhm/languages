/*
    Real examples of boolean.

    Using if/else early, sweet. Looks the same as other languages.
*/

#include <iostream>
using namespace std;

int main() {
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
    cout << "Old enough to vote!" << "\n";
    } else {
    cout << "Not old enough to vote." << "\n";
    }

    // Outputs: Old enough to vote!
    return 0;
}