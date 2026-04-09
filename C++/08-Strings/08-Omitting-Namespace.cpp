/*
    When I first read this, I have no idea what it meant. Now,
    I see that it has to do with removing that first line about
    "using namespace std" which I already learned.
*/

#include <iostream>
#include <string>
// using namespace std; - Remove this line

int main() {
  std::string greeting = "Hello";
  std::cout << greeting << "\n";
  return 0;
}