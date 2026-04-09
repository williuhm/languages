/*
    Booleans are pretty simple. Just 1's and 0's. Should
    be an easy section.
*/

#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << boolalpha; // enable printing "true"/"false"

    cout << isCodingFun << "\n";   // Outputs true
    cout << isFishTasty << "\n";  // Outputs false

    cout << noboolalpha; // reset to 1/0
    
    cout << isCodingFun << "\n";   // Outputs true
    cout << isFishTasty << "\n";  // Outputs false
    return 0;
}