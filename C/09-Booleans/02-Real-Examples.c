/*
    Real examples of booleans.
*/

#include <stdio.h>

int main() {
    int myAge = 25;
    int votingAge = 18;

    printf("%d\n", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!

    if (myAge >= votingAge) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote.\n");
    }

    return 0;
}