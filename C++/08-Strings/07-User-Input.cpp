/*
    Probably getting and using user input as a string.

    Funky things happen with using cin >>, so stick to get line.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName << "\n";

    // Type your first name: John
    // Your name is: John

    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName << "\n";
    */
    // Type your full name: John Doe
    // Your name is: John

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName << "\n";
    return 0;
}