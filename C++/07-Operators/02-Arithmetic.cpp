/*
    Looks like all of these are the same as normal.
    I was specifically looking for modulus to see 
    if that had changed at all, and it hasn't.

    Had to check as well if z-- worked instead
    of --z.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 3;

    cout << (x + y) << "\n"; // 13
    cout << (x - y) << "\n"; // 7
    cout << (x * y) << "\n"; // 30
    cout << (x / y) << "\n"; // 3 (integer division)
    cout << (x % y) << "\n"; // 1

    int z = 5;
    ++z;
    cout << z << "\n"; // 6
    z--;
    cout << z << "\n"; // 5

    double a = 10.0;
    double b = 3.0;
    cout << (a / b) << "\n";   // Decimal division, result is 3.333...

    // Real Life Example
    int peopleInRoom = 0;

    // 3 people enter
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    cout << peopleInRoom << "\n"; // 3

    // 1 person leaves
    peopleInRoom--;

    cout << peopleInRoom << "\n"; // 2
    return 0;
}