/*
    Arrays is a step away from everything else because it's
    a way to store data differently.

    Do I have to write a size of an array, or does it know
    from the input using curly braces?
*/

#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] << "\n";
    // Outputs Volvo

    cars[0] = "Opel";
    cout << cars[0] << "\n";
    // Now outputs Opel instead of Volvo
    return 0;
}