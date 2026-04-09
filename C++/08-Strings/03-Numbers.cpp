/*
    The + operator is for adding and concatenation, similar
    to other languages. No surprise here.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = a + b;      // c will be 30 (an integer)

    string d = "10";
    string e = "20";
    string f = d + e;   // f will be 1020 (a string)

    string x = "10";
    int y = 20;
    // string z = x + y; Error occurs.
    return 0;
}