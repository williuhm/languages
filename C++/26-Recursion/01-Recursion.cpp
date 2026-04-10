/*
    Recursion is something that comes easy to me,
    I'm able to wrap my head around it nicely.
*/

#include <iostream>
using namespace std;

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}

int main() {
  cout << "Factorial of 5 is " << factorial(5) << "\n";
  return 0;
}