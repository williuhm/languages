/*
    Challenge: Fix Customer Order
        Test your understanding of C++ switch by completing a small coding challenge.

    Instructions
        A customer wants to order Coffee.

        The code in the editor is incomplete. Fix it by inserting the missing values so the program prints the correct order.
        1. Change choice to the correct number for Coffee (see the comments).
        2. Insert choice inside switch().
        3. Replace each case: with the correct number based on the comments above.
        4. Move cout << "Invalid choice" into a default: case.
*/

#include <iostream>
using namespace std;

int main() {
    int choice = 1;

    // 1 = Coffee
    // 2 = Tea

    switch (choice) {
        case 1:
            cout << "You ordered Coffee" << "\n";
            break;

        case 2:
            cout << "You ordered Tea" << "\n";
            break;

        default: 
            cout << "Invalid choice" << "\n";
    }

    return 0;
}