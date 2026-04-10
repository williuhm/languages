/*
    I've never used structures so I definitely
    haven't done this.
*/

#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;
};

void myFunction(Car c) {
    cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

void updateYear(Car &c) {
    c.year++;
}

int main() {
    Car myCar = {"Toyota", 2020};
    myFunction(myCar);
    updateYear(myCar);
    cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";
    return 0;
}