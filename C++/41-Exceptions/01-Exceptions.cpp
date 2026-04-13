/*
    Finally, try/throw/catch with exceptions and errors.
    This will make compilable code with errors that I
    can still run without throwing an error.
*/

#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw 505;
        }
    }
    catch (...) {
        cout << "Access denied - You must be at least 18 years old.\n";
    }
    return 0;
}