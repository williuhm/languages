/*
    Queues are another staple of data structures in my opinion.
    First in, first out. Like a line... or a queue...
*/

#include <iostream>
// Include the queue library
#include <queue>
using namespace std;

int main() {
    // Create a queue of strings
    queue<string> cars;

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Access the front element (first and oldest)
    cout << cars.front() << "\n";  // Outputs "Volvo"

    // Access the back element (last and newest)
    cout << cars.back() << "\n";  // Outputs "Mazda"

    // Change the value of the front element
    cars.front() = "Tesla";

    // Change the value of the back element
    cars.back() = "VW";

    // Access the front element
    cout << cars.front() << "\n";  // Now outputs "Tesla" instead of "Volvo"

    // Access the back element
    cout << cars.back() << "\n";  // Now outputs "VW" instead of "Mazda"

    // Remove the front element (Volvo)
    cars.pop();

    // Access the front element (Now BMW)
    cout << cars.front() << "\n";

    cout << cars.empty() << "\n";  // Outputs 0 (not empty)
    return 0;
}