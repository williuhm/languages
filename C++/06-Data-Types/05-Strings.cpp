/*
    Having a string type is nice. In C there is only an array
    of characters which makes things a little weird.

    Never mind, I have to include a library.
*/

#include <iostream>
// Include the string library
#include <string>
using namespace std;

int main() {
    string greeting = "Hello";
    cout << greeting << "\n";
    return 0;
}