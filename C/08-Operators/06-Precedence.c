/*
    This is the PEMDAS of programming. What comes first and 
    what is prioritized during execution.

    ()              - Parentheses
    *, /, %         - Multiplication, Division, Modulus
    +, -            - Addition, Subtraction
    >, <, >=, <=    - Comparison
    ==, !=          - Equality
    &&              - Logical AND
    ||              - Logical OR
    =               - Assignment
*/

#include <stdio.h>

int main() {
    int result1 = 2 + 3 * 4;     // 2 + 12 = 14
    int result2 = (2 + 3) * 4;   // 5 * 4 = 20

    printf("%d\n", result1);
    printf("%d\n", result2);

    result1 = 10 - 2 + 5;    // (10 - 2) + 5 = 13
    result2 = 10 - (2 + 5);  // 10 - 7 = 3

    printf("%d\n", result1);
    printf("%d\n", result2);
    
    return 0;
}