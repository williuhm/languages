/*
    Declaring multipe variables with a comma is something I'm used to,
    but declaring the same value isn't.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 50;
    cout << a + b + c << "\n";

    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;
    return 0;
}