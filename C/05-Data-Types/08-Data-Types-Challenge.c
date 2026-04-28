/*
    Challenge: Create a Student Report Card
        Test your understanding of C data types by completing a small coding challenge.

    Instructions
        Inside main(), complete the following steps:
        1. Declare an int named studentID and assign it a value
        2. Declare a float named score and assign it a value (with decimals)
        3. Declare a char named grade and assign it a single letter (in single quotes)
        4. Print all three values using printf (use the correct format specifiers).
*/

#include <stdio.h>

int main() {
    // Write studentID here
    int studentID = 1073535;
    // Write score here
    float score = 99.78;
    // Write grade here
    char grade = 'A';

    // Print studentID
    printf("%d\n", studentID);
    // Print score
    printf("%f\n", score);
    // Print grade
    printf("%c\n", grade);

    return 0;
}
