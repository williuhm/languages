/*
    Challenge: Check the Minimum Age
        Test your understanding of C++ booleans by completing a small coding challenge.

    Instructions
        Inside main(), complete the following steps:
        1. Declare two int variables named age and minAge
        2. Assign them values
        3. Use cout to print the result of age >= minAge
*/

#include <iostream>
using namespace std;

int main() {
    // Declare and assign age
    int age = 23;
    // Declare and assign minAge
    int minAge = 21;

    // Print age >= minAge
    cout << (age >= minAge) << "\n";
    return 0;
}