/*
    This might be the section that talks about how I did %.2f earlier
    and explains what it means.
*/

#include <stdio.h>

int main() {
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum);   // Outputs 3.500000
    printf("%lf\n", myDoubleNum); // Outputs 19.990000
    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum); // Only show 4 digits
    return 0;
}