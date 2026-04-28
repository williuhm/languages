/*
    I think this is just re-assigning variables to new values,
    so this should be simple.
*/

#include <stdio.h>

int main() {
    // Create a variable and assign a value
    int myNum = 15;

    // Declare a variable without assigning a value
    int myOtherNum;

    // Copy the value from myNum
    myOtherNum = myNum;

    // myOtherNum is now 15
    printf("%d\n", myOtherNum);

    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);

    x = x + 1;
    printf("%d\n", x);

    return 0;
}