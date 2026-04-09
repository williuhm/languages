/*
    This loop has some issues because it doesn't use a saved index.
*/

#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }

    string word = "Hello";
    for (char c : word) {
        cout << c << "\n";
    }
    return 0;
}