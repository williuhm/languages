/*
    Getting the Array size is normally done with a .length() 
    or a .size() function.

    This is more similar to python using sizeof();

    Oh... and you have to divide it by the amount of bytes
    taken up...

    Right, and then we use this for our for loops.
*/

#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength << "\n";

    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        cout << myNumbers[i] << "\n";
    }

    for (int num : myNumbers) {
        cout << num << "\n";
    }
    return 0;
}