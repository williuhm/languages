/*
    Method inside of a class is normal, used that a bunch.
*/

#include <iostream>
using namespace std;

class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

class Dog {
    public:
        void bark() {
            cout << "Woof!" << "\n";
        }
};

int main() {
    Car myObj; // Create an object of Car
    cout << myObj.speed(200) << "\n"; // Call the method with an argument

    Dog myDog;
    myDog.bark();
    return 0;
}