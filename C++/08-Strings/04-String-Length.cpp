/*
    Most languages use a .length() function, and C++ does the same,
    so still pretty similar to other languages.

    You can also use "size" to get the length apparently.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << "\n";
    cout << "The length of the txt string is: " << txt.size() << "\n";
    return 0;
}