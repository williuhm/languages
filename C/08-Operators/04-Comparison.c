/*
    Comparison is what it sounds like. Comparing two values,
    such as numbers or variables. It outputs a boolean true
    or false.

    Operator	Name	                    Example	    Description
    ==	        Equal to	                x == y	    Returns 1 if the values are equal	
    !=	        Not equal	                x != y	    Returns 1 if the values are not equal	
    >	        Greater than	            x > y	    Returns 1 if the first value is greater than the second value	
    <	        Less than	                x < y	    Returns 1 if the first value is less than the second value	
    >=	        Greater than or equal to	x >= y	    Returns 1 if the first value is greater than, or equal to, the second value	
    <=	        Less than or equal to	    x <= y	    Returns 1 if the first value is less than, or equal to, the second value
*/

#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;
    printf("%d\n", x > y); // returns 1 (true) because 5 is greater than 3

    int age = 18;

    printf("%d\n", age >= 18); // 1 (true), old enough to vote
    printf("%d\n", age < 18);  // 0 (false)

    int passwordLength = 5;

    printf("%d\n", passwordLength >= 8); // 0 (false), too short
    printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters
    return 0;
}