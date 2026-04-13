/*
    This is yet another major principle of OOP. This one
    has to do with a parent class having multiple children
    classes and all children classes use the same parent
    class method but incorporate it in a different way.
*/

#include <iostream>
using namespace std;

// Base class
class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound \n";
        }
};

// Derived class
class Pig : public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee \n";
        }
};

// Derived class
class Dog : public Animal {
    public:
        void animalSound() {
            cout << "The dog says: bow wow \n";
        }
};

int main() {
    return 0;
}