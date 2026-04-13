/*
    Input validation is also important for cybersecurity,
    but this goes into making sure the user is following
    rules.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    while (!(cin >> number)) {  // Keep asking until the user enters a valid number
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }
    cout << "You entered: " << number << "\n";
    
    do {
        cout << "Choose a number between 1 and 5: ";
        cin >> number;
    } while (number < 1 || number> 5);  // Keep asking until the user enters a number between 1 and 5

    cout << "You chose: " << number << "\n";

    string name;
    do {
        cout << "Enter your name: ";
        getline(cin, name);
    } while (name.empty());  // Keep asking until the user enters something (name is not empty)

    cout << "Hello, " << name << "\n";
    return 0;
}