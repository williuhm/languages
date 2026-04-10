/*
    Ok I assume this is the difficult part.

    It changes memory addresses every run.

    Nope, this is too short as well... Guess
    it might be a C thing.

    Never mind, it was pointers, up next...
*/

#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    cout << &food << "\n"; // Outputs 0x6dfed4
    return 0;
}