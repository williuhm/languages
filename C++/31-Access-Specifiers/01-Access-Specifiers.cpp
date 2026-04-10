/*
    This determines who can access the class variables with
    public, private, or protected.
*/

#include <iostream>
using namespace std;

class MyClass {
    public:    // Public access specifier
        int x;   // Public attribute
    private:   // Private access specifier
        int y;   // Private attribute
};

int main() {
    MyClass myObj;
    myObj.x = 25;  // Allowed (public)
    // myObj.y = 50;  // Not allowed (private)
    return 0;
}