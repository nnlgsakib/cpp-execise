
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int& ref = num; // Create a reference to 'num'
    cout << "Value of num: " << num << endl; // Output: Value of num: 

    ref = 20;
    cout << "Value of num after change through reference: " << num << endl; // Output: Value of num after change through reference: 20

    return 0;
}