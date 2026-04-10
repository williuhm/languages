/*
    Declaring functions seems pretty simple so far.

    Functions must be declared (not necessarily
    defined) before they are called.
*/

#include <iostream>
using namespace std;

// Declare the function
void myFunction();

int main() {
    myFunction(); // call the function
    myFunction();
    myFunction();
    return 0;
}

// Define the function.
void myFunction() {
    cout << "I just got executed!" << "\n";
}

// Outputs "I just got executed!"