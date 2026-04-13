/*
    Maps seem like a dictionary to me, where a key maps
    to a value.
*/

#include <iostream>
// Include the map library
#include <map>
using namespace std;

int main() {
    // Create a map that will store the name and age of different people
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Get the value associated with the key "John"
    cout << "John is: " << people["John"] << "\n";

    // Get the value associated with the key "Adele"
    cout << "Adele is: " << people["Adele"] << "\n";

     // Get the value associated with the key "Adele"
    cout << "Adele is: " << people.at("Adele") << "\n";

    // Get the value associated with the key "Bo"
    cout << "Bo is: " << people.at("Bo") << "\n";

    // Change John's value to 50 instead of 32
    people["John"] = 50;

    cout << "John is: " << people["John"] << "\n";  // Now outputs John is: 50

    // Change John's value to 50 instead of 32
    people.at("John") = 50;

    cout << "John is: " << people.at("John") << "\n";  // Now outputs John is: 50

    // Add new elements
    people["Jenny"] = 22;
    people["Liam"] = 24;
    people["Kasper"] = 20;
    people["Anja"] = 30;

    people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Add new elements
    people.insert({"Jenny", 22});
    people.insert({"Liam", 24});
    people.insert({"Kasper", 20});
    people.insert({"Anja", 30});

    // Trying to add two elements with equal keys
    people.insert({"Jenny", 22});
    people.insert({"Jenny", 30});

    // Remove an element by key
    people.erase("John");

    cout << people.size() << "\n";  // Outputs 6

    // Remove all elements
    people.clear();

    cout << people.empty() << "\n"; // Outputs 1 (The map is empty)

    people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    for (auto person : people) {
        cout << person.first << " is: " << person.second << "\n";
    }

    map<string, int, greater<string>> people2 = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    for (auto person : people2) {
        cout << person.first << " is: " << person.second << "\n";
    }
    return 0;
}