/*
    Do While is pretty easy as well. Does the code once,
    then checks to see if it needs to repeat.
*/

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

    i = 10;
    do {
        cout << "i is " << i << "\n";
        i++;
    } while (i < 5);

    int number;
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number > 0);
    return 0;
}