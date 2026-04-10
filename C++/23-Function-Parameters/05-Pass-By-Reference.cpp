/*
    This is the confusing part about pointers.

    Yeah, it's confusing. I need to do my own testing
    on this at some point.
*/

#include <iostream>
using namespace std;

void changeValue(int &num) {
    num = 50;
}

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

void modifyStr(string &str) {
    str += " World!";
}

int main() {
    int value = 10;
    changeValue(value);  // Call the function and change the value to 50
    cout << value << "\n"; 

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    string greeting = "Hello";
    modifyStr(greeting);
    cout << greeting << "\n";
    return 0;
}