#include <iostream>
using namespace std;

// Function to multiply two numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to check if a number is even
bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num1, num2, product;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    product = multiply(num1, num2);
    bool even = isEven(product);

    cout << "The product is: " << product << endl;
    cout << "Is the product even? " << (even ? "Yes" : "No") << endl;

    return 0;
}
