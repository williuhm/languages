/*
    I've never used enumerations either. Skimming ahead,
    it looks like a constants version of an array.
*/

#include <iostream>
using namespace std;

enum Level {
    LOW = 1,
    MEDIUM, // Now 2
    HIGH // Now 3
};

int main() {
    // Create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
            cout << "Low Level" << "\n";
            break;
        case 2:
            cout << "Medium level" << "\n";
            break;
        case 3:
            cout << "High level" << "\n";
            break;
    }

    return 0;
}