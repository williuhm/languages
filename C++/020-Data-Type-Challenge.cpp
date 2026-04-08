/*
    Challenge: Create a Student Report Card
        Test your understanding of C++ data types by completing a small coding challenge.

    Instructions
        Inside main(), complete the following steps:
        1. Declare an int named studentID and assign it a value
        2. Declare a float (or double) named score and assign it a value (use a decimal)
        3. Declare a char named grade and assign it a single character (in single quotes)
        4. Print all three values using cout
*/

#include <iostream>
using namespace std;

int main() {
    // Write studentID here
    int studentID = 1073535;
    // Write score here
    double score = 99.23;
    // Write grade here
    char grade = 'A';

    // Print studentID
    cout << studentID << "\n";
    // Print score
    cout << score << "\n";
    // Print grade
    cout << grade << "\n";

    return 0;
}