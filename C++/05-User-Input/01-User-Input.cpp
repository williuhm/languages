/*
    I think I could've jokingly guessed this is how user input works,
    but this is way easier than I thought it would be.
*/

#include <iostream>
using namespace std;

int main() {
    int a; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> a; // Get user input from the keyboard
    cout << "Your number is: " << a << "\n\n"; // Display the input value

    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << "\n";
    return 0;
}