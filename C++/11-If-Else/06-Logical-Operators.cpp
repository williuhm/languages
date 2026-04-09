/*
    This is where we start using && and || for
    different statements to expand them.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 200;
    int b = 33;
    int c = 500;

    if (a > b && c > a) {
        cout << "Both conditions are true" << "\n";
    }

    if (a > b || a > c) {
        cout << "At least one condition is true" << "\n";
    }

    if (!(b > a)) {
        cout << "b is NOT greater than a" << "\n";
    }

    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        cout << "Access granted." << "\n";
    } else {
        cout << "Access denied." << "\n";
    }

    // Try changing securityLevel and isAdmin to test different outcomes:
    // securityLevel 1 = Access granted
    // securityLevel 2 = Access granted
    // securityLevel 3 = Access denied
    // securityLevel 4 = Access denied
    // If isAdmin = true, access is granted.
    return 0;
}