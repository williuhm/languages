/*
    This is the size of each memory type, like how many bytes they take
    up. This is using the sizeof operator which can also be used later 
    to find the length of arrays and probably more.

    %zu is an unsigned integer because sizeof returns that type.

    int	    2 or 4 bytes
    float	4 bytes
    double	8 bytes
    char	1 byte
*/

#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));
    return 0;
}