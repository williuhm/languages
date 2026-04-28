/*
    Arithemetic is the basic operators that are most used.

    +	Addition	    Adds together two values	            x + y	
    -	Subtraction	    Subtracts one value from another	    x - y	
    *	Multiplication	Multiplies two values	                x * y	
    /	Division	    Divides one value by another	        x / y	
    %	Modulus	        Returns the division remainder	        x % y	
    ++	Increment	    Increases the value of a variable by 1	++x	
    --	Decrement	    Decreases the value of a variable by 1	--x
*/

#include <stdio.h>

int main() {
    int x = 10;
    int y = 3;

    printf("%d\n", x + y); // 13
    printf("%d\n", x - y); // 7
    printf("%d\n", x * y); // 30
    printf("%d\n", x / y); // 3
    printf("%d\n", x % y); // 1

    int z = 5;
    ++z;
    printf("%d\n", z); // 6
    --z;
    printf("%d\n", z); // 5

    double c = 10.0;
    double d = 3.0;
    printf("%f\n", c / d);   // Decimal division, result is 3.333...

    x = 5;
    ++x; // Increment x by 1
    printf("%d\n", x); // 6

    x = 5;
    --x; // Decrement x by 1
    printf("%d\n", x); // 4

    x = 5;
    ++x; // Increment x by 1 (x becomes 6)
    --x; // Decrement x by 1 (x becomes 5 again)

    printf("%d\n", x); // 5

    int peopleInRoom = 0;

    // 3 people enter
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    printf("%d\n", peopleInRoom); // 3

    // 1 person leaves
    peopleInRoom--;

    printf("%d\n", peopleInRoom); // 2

    return 0;
}