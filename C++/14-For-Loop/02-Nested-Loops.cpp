/*
    Nested Loops are like 2D arrays to me.
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << " ";
        }
        cout << "\n";
    }
    return 0;
}