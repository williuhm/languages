/*
    Vectors is something that we did earlier,
    so nothing new here.
*/

#include <iostream>
// Include the vector library
#include <vector>
using namespace std;

int main() {
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
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

    cars[0] = "Opel";

    cout << cars[0] << "\n";  // Now outputs Opel instead of Volvo

    cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Change the value of the first element
    cars.at(0) = "Opel";

    cout << cars.at(0) << "\n";  // Now outputs Opel instead of Volvo

    cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cars.push_back("Tesla");
    cars.push_back("VW");
    cars.push_back("Mitsubishi");
    cars.push_back("Mini");

    cars.pop_back();
    cout << cars.size() << "\n";  // Outputs 7

    cout << cars.empty() << "\n";  // Outputs 0 (not empty)

    cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
    }

    for (string car : cars) {
        cout << car << "\n";
    }
    return 0;
}