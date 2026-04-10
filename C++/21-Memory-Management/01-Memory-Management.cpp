/*
    I don't think it's going fully in-depth on why this is
    difficult so that will be later I guess.
*/

#include <iostream>
using namespace std;

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
    cout << sizeof(myFloat) << "\n";   // 4 bytes
    cout << sizeof(myDouble) << "\n";  // 8 bytes
    cout << sizeof(myChar) << "\n";    // 1 byte
    return 0;
}