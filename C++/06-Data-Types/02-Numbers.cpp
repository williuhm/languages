/*
    I like the ability to use "e" for power of ten.
*/
#include <iostream>
using namespace std;

int main() {
    int myInt = 1000;
    cout << myInt << "\n";

    float myFloat = 5.75;
    cout << myFloat << "\n";

    double myDouble = 19.99;
    cout << myDouble << "\n";

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\n";
    cout << d1 << "\n";
    return 0;
}