#include <iostream>
using namespace std;

template <typename T>
T mul(T a, T b) {
    return a * b;
}

int main() {
    int a = 1;
    int b = 20;
   int  SUM =  mul(a, b);
    cout << "Sum: " << SUM << endl;

    double c = 3.5;
    double d = 4.7;
    double PRODUCT = mul(c, d);
    cout << "Product: " << PRODUCT << endl;
    return 0;

}