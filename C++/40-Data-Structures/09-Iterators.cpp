/*
    I've never used a class-specific iterator before, I
    always just used "i" and its index or a for-each
    loop to iterate.
*/

// Include the vector library
#include <vector>

// Include the list library
#include <list>

// Include the stack library
#include <stack>

// Include the queue library
#include <queue>

// Include the deque library
#include <deque>

// Include the set library
#include <set>

// Include the map library
#include <map>

// Include the algorithm library
#include <algorithm> 

#include <iostream>
using namespace std;

int main() {
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Create a vector iterator called it
    vector<string>::iterator it0;
    // auto it = cars.begin();

    // Loop through the vector with the iterator
    for (it0 = cars.begin(); it0 != cars.end(); ++it0) {
        cout << *it0 << "\n";
    }

    // Point to the first element in the vector
    it0 = cars.begin() + 1;

    // Point to the last element
    it0 = cars.end() - 1;

    // Point to the first element in the vector
    it0 = cars.begin();

    // Modify the value of the first element
    *it0 = "Tesla";

    // Volvo is now Tesla

    for (auto it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << "\n";
    }

    // Print vector elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // Loop through vector elements
    for (auto it = cars.begin(); it != cars.end(); ) {
        if (*it == "BMW") {
            it = cars.erase(it); // Remove the BMW element
        } else {
            ++it;
        }
    }

    // Print vector elements
    for (const string& car : cars) {
        cout << car << "\n";
    }

    // Iterate in reverse order
    for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
        cout << *it << "\n";
    }

    list<string> cars1 = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through the list with an iterator
    for (auto it = cars1.begin(); it != cars1.end(); ++it) {
        cout << *it << "\n";
    }

    // Create a deque called cars that will store strings
    deque<string> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through the deque with an iterator
    for (auto it = cars2.begin(); it != cars2.end(); ++it) {
        cout << *it << "\n";
    }

    // Create a set called cars that will store strings
    set<string> cars3 = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through the set with an iterator
    for (auto it = cars3.begin(); it != cars3.end(); ++it) {
        cout << *it << "\n";
    }

    // Create a map that will store strings and integers
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Loop through the map with an iterator
    for (auto it = people.begin(); it != people.end(); ++it) {
        cout << it->first << " is: " << it->second << "\n";
    }

    // Create a vector called cars that will store strings
    vector<string> cars4 = {"Volvo", "BMW", "Ford", "Mazda"};

    // Sort cars in alphabetical order
    sort(cars4.begin(), cars4.end());

    // Print cars in alphabetical order
    for (string car : cars4) {
        cout << car << "\n";
    }

    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort numbers numerically
    sort(numbers.begin(), numbers.end());

    for (int num : numbers) {
        cout << num << "\n";
    }

    // Sort numbers numerically in reverse order
    sort(numbers.rbegin(), numbers.rend());

    for (int num : numbers) {
        cout << num << "\n";
    }
    return 0;
}