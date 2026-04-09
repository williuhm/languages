/*
    Else statements go with if statements, should be
    relatively easy.
*/

#include <iostream>
using namespace std;

int main() {
    int time = 20;

    bool isDay = time < 18;

    if (isDay) {
        cout << "Good day." << "\n";
    } else {
        cout << "Good evening." << "\n";
    }

    // Outputs "Good evening."
}