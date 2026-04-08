/*
    No new line character in output, so it must be done manually.

    Numbers don't need quotes, which I'm used to. And calculations
    can be done as well, so no quotes there.

    You an use << twice which I'm assuming appends.

    You can also use "endl" which might mean "end line"?
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++ \n\n";

  cout << 3;
  cout << "\n";
  cout << 3 + 3;
  cout << "\n";
  cout << 2 * 5;
  return 0;
}

/*
    Both \n and endl are used to break lines. However, \n is most used.

    But what is \n exactly?
    
    The newline character (\n) is called an escape sequence, and it forces
    the cursor to change its position to the beginning of the next line on
    the screen. This results in a new line.
*/