/*
    Data Types is probably the section for differentiating between
    integers, doubles, floats, etc. 

    Data Type	Size	        Description	                                                                                            Example
    int	        2 or 4 bytes	Stores whole numbers, without decimals	                                                                1
    float	    4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	1.99
    double	    8 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	1.99
    char	    1 byte	        Stores a single character/letter/number, or ASCII values	                                            'A'

    %d or %i	int	
    %f or %F	float	
    %lf	        double	
    %c	        char	
    %s	        Used for strings (text), which you will learn more about in a later chapter
*/

#include <stdio.h>

int main() {
    // Create variables
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    return 0;
}

