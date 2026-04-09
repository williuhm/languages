/*
    If else statements start to feel like a more complex
    to talk about, so things are getting up there now.
*/

#include <iostream>
using namespace std;

int main() {
    if (20 > 18) {
        cout << "20 is greater than 18" << "\n";
    }

    int x = 20;
    int y = 18;

    bool isGreater = x > y;

    if (isGreater) {
        cout << "x is greater than y" << "\n";
    }
    return 0;
}