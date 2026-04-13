/*
    This will be a little difficult to write, as I try to keep
    all of my files without errors.
*/

#include <iostream>
using namespace std;

int main() {
    // Missing semicolon:
    // int x = 5

    // Using undeclared variables:
    // cout << myVar

    // Mismatched types (e.g. trying to assign a string to an int):
    // int x = "Hello";

    // Dividing by 0:
    // int a = 10;
    // int b = 0;
    // int result = a / b;  // not possible
    // cout << result;

    // Accessing out-of-bounds array elements:
    // int numbers[3] = {1, 2, 3};
    // cout << numbers[8];  // element does not exist

    // Using deleted memory (dangling pointer):
    // int* ptr = new int(10);
    // delete ptr;
    // cout << *ptr;  // invalid
    return 0;
}