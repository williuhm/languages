/*
    I don't use constants too much, but I at least know what they are.
*/

#include <iostream>
using namespace std;

int main() {
    const int myNum = 15;  // myNum will always be 15
    // myNum = 10;  // error: assignment of read-only variable 'myNum'

    // const int minutesPerHour;
    // minutesPerHour = 60; // error
    return 0;
}