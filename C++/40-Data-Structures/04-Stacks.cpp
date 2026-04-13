/*
    Stacks are one of the staples of Data Structures,
    in my opinion. First in, last out.
*/

#include <iostream>
// Include the stack library
#include <stack>
using namespace std;

int main() {
    // Create a stack of strings called cars
    stack<string> cars;

    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Access the top element
    cout << cars.top() << "\n";  // Outputs "Mazda"

    // Change the value of the top element
    cars.top() = "Tesla";

    // Access the top element
    cout << cars.top() << "\n";  // Now outputs "Tesla" instead of "Mazda"

    // Remove the last added element (Mazda)
    cars.pop();

    // Access the top element (Now Ford)
    cout << cars.top() << "\n";

    cout << cars.empty() << "\n";  // Outputs 0 (not empty)
    return 0;
}