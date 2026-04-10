/*
    This is something I was wondering about a couple
    of programs ago. While reading the name of this
    program, I remembered ArrayLists from Java; I
    wonder if that's what they have here.

    Oh, they have vectors. Not what I was expecting.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string carsArray[] = {"Volvo", "BMW", "Ford"}; // Three array elements

    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";

    // A vector with 3 elements
    vector<string> carsVector = {"Volvo", "BMW", "Ford"};

    // Adding another element to the vector
    carsVector.push_back("Tesla");
    return 0;
}