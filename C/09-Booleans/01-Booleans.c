/*
    Booleans are binary in code. Yes and no, true and false,
    1 and 0, on and off. In C, they must be imported.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Print boolean values
    printf("%d\n", isProgrammingFun);   // Prints 1 (true)
    printf("%d\n", isFishTasty);        // Prints 0 (false)

    printf("%d\n", 10 > 9);  // Prints 1 (true), because 10 is greater than 9

    int x = 10;
    int y = 9;

    printf("%d\n", x > y);

    printf("%d\n", 10 == 10); // Prints 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Prints 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Prints 0 (false), because 5 is not equal to 55

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza are tasty
    printf("%d\n", isHamburgerTasty == isPizzaTasty);

    bool isGreater = x > y;

    printf("%d\n", isGreater); // Prints 1 (true)

    return 0;
}