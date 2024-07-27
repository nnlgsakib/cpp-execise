#include <iostream>

int mul(int a, int b) {
    return a * b;
}

int mul(double a , double b) {
    return a * b;
    }
int main() {
    int comul = mul(3, 4);
    double domul2 = mul(3.5, 4.2);
    std::cout << "Integer multiplication: " << comul << std::endl;
    std::cout << "Double multiplication: " << domul2 << std::endl;
    return 0;
}