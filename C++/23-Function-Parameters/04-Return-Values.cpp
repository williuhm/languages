/*
    Return values are also normal, we've been using "void".
*/

#include <iostream>
using namespace std;

int myFunction(int x, int y) {
    return x + y;
}

int doubleGame(int x) {
  return x * 2;
}

int main() {
    int z = myFunction(5, 3);
    cout << z << "\n";

    for (int i = 1; i <= 5; i++) {
        cout << "Double of " << i << " is " << doubleGame(i) << endl;
    }
    return 0;
}
// Outputs 8 (5 + 3)