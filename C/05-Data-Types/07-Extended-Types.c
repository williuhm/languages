/*
    This section goes into extra types that can be used in
    C, such as double longs and more.

    Type	                Size*	            Range (commonly)	                                                Format Specifier
    short int	            2 bytes	           -32,768 to 32,767	                                                %hd
    unsigned int	        2 or 4 bytes	    0 to 65,535 (2 bytes)                                               %u
                                                0 to 4,294,967,295  (4 bytes)	
    long int	            4 or 8 bytes       -2,147,483,648 to 2,147,483,647 (4 bytes)                            %ld
                                               -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (8 bytes)	
    long long int	        8 bytes	           -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	            %lld
    unsigned long int	    4 or 8 bytes	    0 to 4,294,967,295 (4 bytes)                                        %lu
                                                0 to 18,446,744,073,709,551,615 (8 bytes)	
    unsigned long long int	8 bytes	            0 to 18,446,744,073,709,551,615	                                    %llu
    long double	            8, 12, or 16 bytes	Implementation-dependent, but more precision than double	        %Lf
*/

#include <stdio.h>

int main() {
    int normalInt = 1000;                       // standard int 
    double normalDouble = 3.14;                 // standard double

    short int small = -100;                     // smaller int
    unsigned int count = 25;                    // only positive int
    long int big = 1234567890;                  // larger int
    long long int veryBig = 9223372036854775807; // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L; // extended precision

    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    
    return 0;
}