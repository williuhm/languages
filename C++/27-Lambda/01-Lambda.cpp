/*
    I've never used a lambda function, so this is new to me.

    It's a small function, I guess, but I don't see a practical
    use for it just yet.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    auto show = [&x]() {
        cout << x;
    };

    x = 20;  // Change x after the lambda is created

    show();
    return 0;
}