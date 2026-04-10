/*
    We're getting into more unique things here, I haven't
    really used structures up until this point, so this
    will be new to me.

    This seems like maybe an abstract class from Java? If
    not, I at least understand it.
*/

#include <iostream>
#include <string>
using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
    // Create a structure variable called myStructure
    struct {
        int myNum;
        string myString;
    } myStructure;

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    // Create a car structure and store it in myCar1;
    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Create another car structure and store it in myCar2;
    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
    
    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    // Challenge Task
    struct {
        string name;
        int age;
        char grade;
    } student;
    student.name = "Liam";
    student.age = 35;
    student.grade = 'A';

    cout << "Name: " << student.name << "\n";
    cout << "Age: " << student.age << "\n";
    cout << "Grade: " << student.grade << "\n";
    return 0;
}