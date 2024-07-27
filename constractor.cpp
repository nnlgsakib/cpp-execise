#include <iostream>
using namespace std;

// Define a class called Triangle
class Triangle {
public:
    int base;
    int height;

    // Constructor
    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    // Destructor
    ~Triangle() {
        cout << "Triangle object destroyed" << endl;
    }

    // Member function to calculate area
    int area() const {
        return (base * height) / 2;
    }
};

int main() {
    Triangle triangle1(5, 10); // Create an object of Triangle class with base = 5 and height = 10
    Triangle triangle2(7, 15); // Create another object of Triangle class with base = 7 and height = 15

    cout << "Area of triangle1: " << triangle1.area() << endl; // Calculate and display the area of triangle1
    cout << "Area of triangle2: " << triangle2.area() << endl; // Calculate and display the area of triangle2

    return 0;
}
