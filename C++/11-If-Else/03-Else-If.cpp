/*
    Else If allows for multiple checks, very useful.
*/

#include <iostream>
using namespace std;

int main() {
    int time = 16;

    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning) {
        cout << "Good morning." << "\n";
    } else if (isDay) {
        cout << "Good day." << "\n";
    } else {
        cout << "Good evening." << "\n";
    }
    return 0;
}