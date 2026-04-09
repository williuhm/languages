/*
    I've used switch statements at one point, but it's not
    something I do very often.
*/

#include <iostream>
using namespace std;

int main() {
    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday" << "\n";
            break;
        case 2:
            cout << "Tuesday" << "\n";
            break;
        case 3:
            cout << "Wednesday" << "\n";
            break;
        case 4:
            cout << "Thursday" << "\n";
            break;
        case 5:
            cout << "Friday" << "\n";
            break;
        case 6:
            cout << "Saturday" << "\n";
            break;
        case 7:
            cout << "Sunday" << "\n";
            break;
    }
    // Outputs "Thursday" (day 4)

    switch (day) {
        case 6:
            cout << "Today is Saturday" << "\n";
            break;
        case 7:
            cout << "Today is Sunday" << "\n";
            break;
        default:
            cout << "Looking forward to the Weekend" << "\n";
        }
        // Outputs "Looking forward to the Weekend"
    return 0;
}