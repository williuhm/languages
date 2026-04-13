/*
    The end of the last program had some algorithms in it
    that iterators were included in. This must be more
    of those.
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

    // Sort cars alphabetically
    sort(cars.begin(), cars.end());

    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort numbers numerically
    sort(numbers.begin(), numbers.end());

    // Sort numbers numerically in reverse order
    sort(numbers.rbegin(), numbers.rend());

    // Sort numbers numerically, starting from the fourth element (only sort 5, 9, and 2)
    sort(numbers.begin() + 3, numbers.end());

    numbers = {1, 7, 3, 5, 9, 2};

    // Search for the number 3
    auto it = find(numbers.begin(), numbers.end(), 3);

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Find the first value that is greater than 5 in the sorted vector
    it = upper_bound(numbers.begin(), numbers.end(), 5);

    numbers = {1, 7, 3, 5, 9, 2};

    // Find the smallest number
    it = min_element(numbers.begin(), numbers.end());

    // Find the largest number
    it = max_element(numbers.begin(), numbers.end());

    // Create a vector called copiedNumbers that should store 6 integers
    vector<int> copiedNumbers(6);

    // Copy elements from numbers to copiedNumbers
    copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

    // Fill all elements in the numbers vector with the value 35
    fill(numbers.begin(), numbers.end(), 35);
    return 0;
}