/*
    Process of finding out what is going wrong
    within your code.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 1; // 0
    cout << "Before division\n"; // Debug output
    int z = x / y; // Crashes!
    cout << "After division\n"; // Never runs

    y = 5;
    int result = x - y;
    cout << "Result: " << result << "\n"; // Result: 5   Expected: 15
    return 0;
}