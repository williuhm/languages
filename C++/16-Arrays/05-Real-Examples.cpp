/*
    Real examples of Arrays.
*/

#include <iostream>
using namespace std;

int main() {
    // An array storing different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Loop through the elements of the array
    for (int age : ages) {
        sum += age;
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / length;

    // Print the average
    cout << "The average age is: " << avg << "\n";

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }

    // Print the lowest age
    cout << "The lowest age is: " << lowestAge << "\n";
    return 0;
}