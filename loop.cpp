#include <iostream>
using namespace std;

int main() {
    // for loop
    for (int n = 1; n <= 10; n++) {
        cout << "The number is " << n << endl;
    }
    // while loop
    int m = 1;
    while (m <= 10) {
        cout << "The number is " << m << endl;
        m++;
    }
    // do-while loop
    int k = 1;
    do {
        cout << "The number is " << k << endl;
        k++;
    } while (k <= 10);

    return 0;
}
