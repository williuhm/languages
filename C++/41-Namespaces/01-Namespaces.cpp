/*
    Namespaces have been a thing ever since we started,
    since we've been using one at the beginning of every
    program. Now I get to make my own.
*/

#include <iostream>
using namespace std;

namespace MyNamespace {
    int x = 42;
}

using namespace MyNamespace;

int main() {
    cout << x << "\n";  // No need to write MyNamespace::x
    return 0;
}