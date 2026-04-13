/*
    List was also a thing in Java, but I always just
    used ArrayList, so I don't know much about this
    one.

    You can add things to the beginning and end of a list.
    No random access, can't use position of element to 
    access a variable in the list.
*/

#include <iostream>
// Include the list library
#include <list>
using namespace std;


int main() {
    // Create a list called cars that will store strings
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print list elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // Get the first element
    cout << cars.front() << "\n";  // Outputs Volvo

    // Get the last element
    cout << cars.back() << "\n";  // Outputs Mazda

    // Change the value of the first element
    cars.front() = "Opel";

    // Change the value of the last element
    cars.back() = "Toyota";

    cout << cars.front() << "\n"; // Now outputs Opel instead of Volvo
    cout << cars.back() << "\n";  // Now outputs Toyota instead of Mazda

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    cout << cars.size() << "\n";  // Outputs 4

    cout << cars.empty() << "\n";  // Outputs 0 (not empty)

    // Can't use for loop.
    cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << "\n";
    }
    return 0;
}