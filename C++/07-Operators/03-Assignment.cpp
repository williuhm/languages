/*
    Isn't assignment what we've been doing this whole time?
    With x = 10 and y = 3?

    I guess it makes sense because of the x = x+5, alright.

    It says you can do x <<= 3 which I have no idea what 
    that is.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    x += 5;  // same as x = x + 5
    cout << x << "\n"; // 15

    x *= 2;  // same as x = x * 2
    cout << x << "\n"; // 30

    // Example
    int savings = 100; 
    savings += 50; // add 50 to savings

    cout << "Total savings: " << savings << "\n";
    return 0;
}