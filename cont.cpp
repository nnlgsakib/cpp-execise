#include <iostream>
using namespace std;

int main() {
    int num1 = 1;
    int num2 = num1;

    // if-else-if ladder to check if the number is positive, negative, or zero
    if (num1 >= 0) {
        cout << "num1 is positive or zero" << endl;
    } else if (num1 < 0) {
        cout << "num1 is negative" << endl;
    } else {
        cout << "num1 is invalid" << endl;
    }

    // switch-case to check if num2 is even or odd
    switch (num2 % 2) {
        case 1:
            cout << "num2 is an odd number" << endl;
            break;
        case 0:
            cout << "num2 is an even number" << endl;
            break;
        default:
            cout << "num2 is invalid" << endl;
            break;
    }

    return 0;
}
