/*
    C++ has a "string" type variable which I did not expect
    because of my experience with C.

    I guess that << is C++'s version of using + between strings.
*/

#include <iostream>
using namespace std;

int main() {
    int myNum;
    myNum = 15;                  // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    cout << myNum << "\n";

    // Display combination of variables.
    string name = "John";
    int age = 35;
    double height = 6.1;

    cout << name << " is " << age << " years old and " << height << " feet tall. \n";

    // Add variables together
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum;
    return 0;
}