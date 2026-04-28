/*
    Characters are single letters, which is native to C. Strings are
    just character arrays and must be imported. Otherwise, a char array
    is used.
*/

#include <stdio.h>

int main() {
    char myGrade = 'A';
    printf("%c\n", myGrade);

    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);

    char myText[] = "Hello";
    printf("%s\n", myText);
    return 0;
}