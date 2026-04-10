/*
    I don't think I've seen or used this before.
*/
#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
    cout << country << "\n";
}

int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");
    return 0;
}

// Sweden
// India
// Norway
// USA