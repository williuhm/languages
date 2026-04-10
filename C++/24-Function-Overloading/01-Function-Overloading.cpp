/*
    Function overloading is having multiple functions with
    the same name that can be used based on what you pass
    to it.
*/

#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
    return x + y;
}

int plusFunc(int x, int y, int z) {
    return x + y + z;
}

double plusFunc(double x, double y) {
    return x + y;
}

int main() {
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);

    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";

    int result1 = plusFunc(3, 7);
    int result2 = plusFunc(1, 2, 3);

    cout << "Sum of 2 numbers: " << result1 << "\n";
    cout << "Sum of 3 numbers: " << result2 << "\n";
    return 0;
}