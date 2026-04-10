/*
    I have never heard of friend functions before, so
    this is new to me.
*/

#include <iostream>
using namespace std;

class Employee {
    private:
        int salary;

    public:
        Employee(int s) {
            salary = s;
        }

        // Declare friend function
        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
    cout << "Salary: " << emp.salary << "\n";
}

int main() {
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0;
}