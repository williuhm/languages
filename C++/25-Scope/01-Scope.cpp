/*
    Scope just tells you that a variable lives inside its
    curly braces.
*/

#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFunction() {
    // Local variable with the same name as the global variable (x)
    int x = 22;
    cout << x << "\n"; // Refers to the local variable x
}

int main() {
    myFunction();

    cout << x << "\n"; // Refers to the global variable x
    return 0;
}