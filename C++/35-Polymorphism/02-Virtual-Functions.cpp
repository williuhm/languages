/*
    This is about overriding functions, it's a different
    term here than in other languages. I think we used
    abstract classes or interface in Java.
*/

#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void sound() {
            cout << "Animal sound\n";
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout << "Dog barks\n";
        }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound(); // Outputs: Dog barks
    return 0;
}