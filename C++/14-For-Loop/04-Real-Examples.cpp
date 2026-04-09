/*
    Real examples of for loops.
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 100; i += 10) {
        cout << i << "\n";
    }

    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << "\n";
    }

    for (int i = 1; i <= 10; i = i + 2) {
        cout << i << "\n";
    }

    for (int i = 2; i <= 512; i *= 2) {
        cout << i << "\n";
    }

    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << "\n";
    }
    return 0;
}