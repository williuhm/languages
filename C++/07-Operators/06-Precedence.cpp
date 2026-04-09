/*
    Sounds like this will be about PEMDAS, which is
    pretty simple.
*/

#include <iostream>
using namespace std;

int main() {
    int result1 = 2 + 3 * 4;     // 2 + 12 = 14
    int result2 = (2 + 3) * 4;   // 5 * 4 = 20

    cout << result1 << "\n";
    cout << result2 << "\n";

    int result3 = 10 - 2 + 5;    // (10 - 2) + 5 = 13
    int result4 = 10 - (2 + 5);  // 10 - 7 = 3

    cout << result3 << "\n";
    cout << result4 << "\n";
    return 0;
}

/*
    ()              Parentheses
    *, /, %         Multiplication, Division, Modulus
    +, -            Addition, Subtraction
    >, <, >=, <=    Comparison
    ==, !=          Equality
    &&              Logical AND
    ||              Logical OR
    =               Assignment
*/