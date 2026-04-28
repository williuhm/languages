/*
    Challenge: Calculate the Total Cost of an Item
        Test your understanding of C operators by completing a small coding challenge.

    Instructions
        Inside main(), complete the following steps:
        1. Declare two int variables named itemPrice and shippingCost, and assign them values
        2. Create an int variable named sum
        3. Calculate the total cost by adding itemPrice and shippingCost (store the result in sum)
        4. Print the total cost using printf
*/

#include <stdio.h>

int main() {
    // Write itemPrice here
    int itemPrice = 5;
    // Write shippingCost here
    int shippingCost = 8;

    // Write sum here (itemPrice + shippingCost)
    int sum;
    sum = itemPrice + shippingCost;

    // Print sum here
    printf("%d\n", sum);

  return 0;
}