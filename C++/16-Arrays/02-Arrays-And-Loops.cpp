/*
    Looping through an array is very common, nothing
    too different here.
*/

#include <iostream>
using namespace std;

int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars[i] << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
    }

    for (string car : cars) {
        cout << car << "\n";
    }

    for (int num : myNumbers) {
        cout << num << "\n";
    }
    return 0;
}