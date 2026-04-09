/*
    I've seen these used, but never actually learned them,
    so this is good for me.

    I didn't think about doing the ? expression more than
    once, that's actually useful, but can definitely make
    things hard to read.
*/

#include <iostream>
using namespace std;

int main() {
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << "\n";

    cout << ((time < 18) ? "Good day." : "Good evening.") << "\n";

    time = 22;
    string message = (time < 12) ? "Good morning."
        : (time < 18) ? "Good afternoon."
        : "Good evening.";
    cout << message << "\n";
    return 0;
}