/*
    Sets are in order and ignore duplicate values. They cannot be
    changed, but they can be added or removed. There are no index
    values for the numbers stored.
*/

#include <iostream>
// Include the set library
#include <set>
using namespace std;

int main() {
    // Create a set called cars that will store strings
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print set elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // Create a set called numbers that will store integers
    set<int> numbers = {1, 7, 3, 2, 5, 9};

    // Print set elements
    for (int num : numbers) {
        cout << num << "\n";
    }

    // Sort elements in a set in descending order
    set<int, greater<int>> numbers2 = {1, 7, 3, 2, 5, 9};
    // Print the elements
    for (int num : numbers2) {
        cout << num << "\n";
    }

    cars = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};

    // Print set elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // Add new elements
    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");

    // Remove elements
    cars.erase("Volvo");
    cars.erase("Mazda");

    cout << cars.size() << "\n";  // Outputs 4

    cars.clear();
    cout << cars.empty() << "\n";  // Outputs 1 (The set is empty)

    cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << "\n";
    }
    return 0;
}