/*
    For loops are probably the most difficult thing in terms of basics.
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << "\n";
    }

    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    cout << "Sum is " << sum << "\n";

    for (int i = 5; i > 0; i--) {
        cout << i << "\n";
    }
    return 0;
}