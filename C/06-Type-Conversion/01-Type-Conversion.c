/*
    Converting between types is necessary for some functions, like converting
    an integer to a float, etc.
*/

#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;
    int sum = 5 / 2;

    printf("%d\n", sum); // Outputs 2

    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f\n", myFloat); // 9.000000

    // Automatic conversion: float to int
    int myInt = 9.99;

    printf("%d\n", myInt); // 9

    printf("%f\n", sum); // 2.000000

    // Manual conversion: int to float
    float sumFloat = (float) 5 / 2;

    printf("%f\n", sumFloat); // 2.500000

    int num1 = 5;
    int num2 = 2;
    float sumExample = (float) num1 / num2;

    printf("%.1f\n", sumExample); // 2.500000

    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 423;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f\n", percentage);
    return 0;
}