/*
    This sounds pretty simple. Just... multiple variables. Been doing that
    for a while now.

    Ah, it was declaring multiple variables. Makes more sense.
*/

#include <stdio.h>

int main() {
    int x = 5, y = 6, z = 50;
    printf("%d\n", x + y + z);

    x = y = z = 50;
    printf("%d\n", x + y + z);
    return 0;
}