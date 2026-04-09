/*
    Comparison usually results in a binary output,
    so that's what I'll be expecting here.

    I was right.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    cout << (x > y) << "\n"; // returns 1 (true) because 5 is greater than 3

    // Real examples
    int age = 18;

    cout << (age >= 18) << "\n"; // 1 (true), old enough to vote
    cout << (age < 18) << "\n";  // 0 (false)

    int passwordLength = 5;

    cout << (passwordLength >= 8) << "\n"; // 0 (false), too short
    cout << (passwordLength < 8) << "\n";  // 1 (true), needs more characters
    return 0;
}