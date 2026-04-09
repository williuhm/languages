/*
    Examples of while loops.

    Pretty challenging while loop for reversing numbers, good example.
*/

#include <iostream>
using namespace std;

int main() {
    int countdown = 3;

    while (countdown > 0) {
        cout << countdown << "\n";
        countdown--;
    }

    cout << "Happy New Year!!\n";

    int i = 0;

    while (i <= 10) {
        cout << i << "\n";
        i += 2;
    }

    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers) {
        // Get the last number of 'numbers' and add it to 'revNumbers'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the last number of 'numbers'
        numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";

    int dice = 1;

    while (dice <= 6) {
        if (dice < 6) {
            cout << "No Yatzy\n";
        } else {
            cout << "Yatzy!\n";
        }
        dice = dice + 1;
    }
    return 0;
}