#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function makes Shape an abstract class
};

class Rectangle : public Shape {
public:
    int height;
    int width;

    double area() const override {
        return height * width;
    }
};

class Circle : public Shape {
public:
    double radius;

    double area() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.height = 5;
    rectangle.width = 10;
    cout << "Rectangle area: " << rectangle.area() << endl;

    Circle circle;
    circle.radius = 3.5;
    cout << "Circle area: " << circle.area() << endl;

    return 0;
}
