#include <iostream>
#include <string>
#include <math.h>

class circle {
    public:
    double radius;

    double area() {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    circle myCircle;
    myCircle.radius = 100;

    std::cout << "The area of the circle is: " << myCircle.area() << std::endl;

    return 0;
}