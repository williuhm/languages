/*
    Numbers are going to be either integers, floats, or doubles
    where integers don't contain a decimal.
*/

#include <stdio.h>

int main() {
    int myInt = 1000;
    printf("%d\n", myInt);

    float myFloat = 5.75;
    printf("%f\n", myFloat);

    double myDouble = 19.99;
    printf("%lf\n", myDouble);

    float f1 = 35e3;   // 35 * 10^3 = 35000
    double d1 = 12E4;  // 12 * 10^4 = 120000

    printf("%f\n", f1);
    printf("%lf\n", d1);
    return 0;
}