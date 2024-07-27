#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    // Arithmetic Operations
    int add = x + y;
    int subtract = add - y;
    int multiply = subtract * x;
    int divide = multiply / y;
    int modulus = divide % x;

    // Comparison Operations
    bool isEqual = (multiply == divide);
    bool isGreater = (multiply > divide);
    bool isLesser = (multiply < divide);
    bool isGreaterOrEqual = (multiply >= divide);
    bool isLesserOrEqual = (multiply <= divide);
    bool isNotEqual = (multiply != divide);

    // Logical Operations
    bool logicalAnd = (multiply == divide) && (divide == modulus);
    bool logicalOr = (multiply == divide) || (divide == modulus);
    bool logicalNot = !(multiply == divide);

    // Assignment Operations
    multiply += 10;
    multiply -= 10;
    multiply *= 10;
    multiply /= 10;
    multiply %= 10;

    // Print Results
    cout << "Addition: " << add << endl;
    cout << "Subtraction: " << subtract << endl;
    cout << "Multiplication: " << multiply << endl;
    cout << "Division: " << divide << endl;
    cout << "Modulus: " << modulus << endl;
    cout << "Is Equal: " << isEqual << endl;
    cout << "Is Greater: " << isGreater << endl;
    cout << "Is Lesser: " << isLesser << endl;
    cout << "Is Greater or Equal: " << isGreaterOrEqual << endl;
    cout << "Is Lesser or Equal: " << isLesserOrEqual << endl;
    cout << "Is Not Equal: " << isNotEqual << endl;
    cout << "Logical AND: " << logicalAnd << endl;
    cout << "Logical OR: " << logicalOr << endl;
    cout << "Logical NOT: " << logicalNot << endl;

    return 0;
}
