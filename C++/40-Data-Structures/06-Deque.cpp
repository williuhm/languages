/*
    I've never seen or even heard of this one. It's a 
    double-ended queue. You can also use index, which
    is strange.
*/

#include <iostream>
// Include the deque library
#include <deque>
using namespace std;

int main() {
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print deque elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // Get the first element
    cout << cars[0] << "\n";  // Outputs Volvo

    // Get the second element
    cout << cars[1] << "\n";  // Outputs BMW

    // Get the first element
    cout << cars.front() << "\n";

    // Get the last element
    cout << cars.back() << "\n";

    // Get the second element
    cout << cars.at(1) << "\n";

    // Get the third element
    cout << cars.at(2) << "\n";

    // Change the value of the first element
    cars[0] = "Opel";

    cout << cars[0] << "\n";  // Now outputs Opel instead of Volvo

    // Change the value of the first element
    cars.at(0) = "Opel";

    cout << cars.at(0) << "\n";  // Now outputs Opel instead of Volvo

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    cout << cars.empty() << "\n";  // Outputs 0 (not empty)

    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
    }

    for (string car : cars) {
        cout << car << "\n";
    }
    return 0;
}