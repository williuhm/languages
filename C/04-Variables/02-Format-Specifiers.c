/*
    This is where we print variables since we previously
    couldn't do it. Using printf like I suspected.
*/

#include <stdio.h>

int main() {
    // Create variables
    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("My number is %d and my letter is %c\n", myNum, myLetter);

    printf("My favorite number is: %d\n", 15);
    printf("My favorite letter is: %c\n", 'D');
    
    return 0;
}