/*
    Concatenation is what I've been doing with << I thought.
    It looks like I'll be using + now instead?
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName) + "\n";
    cout << fullName;
    return 0;
}