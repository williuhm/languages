/*
    While loops are one of the more complicated things to understand,
    so at this point we're pretty deep into C++.
*/

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    int countdown = 3;

    while (countdown > 0) {
        cout << countdown << "\n";
        countdown--;
    }

    cout << "Happy New Year!!\n";
    return 0;
}