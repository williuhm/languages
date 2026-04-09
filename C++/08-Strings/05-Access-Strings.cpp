/*
    Seems like where I would find charAt() or others.

    It's accessed like C where it's an array of characters
    Makes sense.

    Length - 1 also makes sense, normal things.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "Hello";
    cout << myString[0] << "\n"; // I couldn't do (+ "\n") here, I wonder why?
    // Outputs H

    cout << myString[1] << "\n";

    cout << myString[myString.length() - 1] << "\n";
    // Outputs o

    myString[0] = 'J';
    cout << myString << "\n";


    // The <string> library also has an at() function that can be used to access characters in a string:
    myString = "Hello";

    cout << myString << "\n"; // Outputs Hello

    cout << myString.at(0);  // First character
    cout << myString.at(1);  // Second character
    cout << myString.at(myString.length() - 1) << "\n";  // Last character

    myString.at(0) = 'J';
    cout << myString << "\n";  // Outputs Jello
    return 0;
}