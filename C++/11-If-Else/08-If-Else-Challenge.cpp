/*
    Challenge: Make a Decision with If and Else
        Test your understanding of C++ conditions by completing a small coding challenge.

    Instructions
        Inside main(), complete the following steps:
        1. Declare an int variable named age and assign it a value
        2. Use an if statement with the >= operator to check if age is 18 or older
        3. If the condition is true, print Allowed
        4. Otherwise, print Not allowed
*/

#include <iostream>
using namespace std;

int main() {
    // Write age here
    int age = 23;

    // Write an if statement that checks if age >= 18
    if (age >= 18) {
        // If true, print "Allowed" inside the if block
        cout << "Allowed" << "\n";
    // Write an else statement
    } else {
        // Inside the else block, print "Not allowed"
        cout << "Not allowed" << "\n";
    }
    
    return 0;
}