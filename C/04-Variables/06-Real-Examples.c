/*
    Real examples of variables.
*/

#include <stdio.h>

int main() {
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student ID: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %.2f\n", studentFee);      // Surprised I remembered how to do this ".2f" thing.
    printf("Student grade: %c\n\n", studentGrade);

    // Create variables
    int length = 4;
    int width = 6;
    int area;

    // Calculate the area
    area = length * width;

    // Print the result
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d\n", area);
    return 0;
}