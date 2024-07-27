#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
    int age;
    public:
    int set_age(int new_age) {
        age = new_age;
        return age;
    }
    int get_age() {
        return age;
    }
};

class Dog : public Animal {
    public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog dmog;
    int age_d = dmog.set_age(5);
    cout << "Dog's age: " << dmog.get_age() << endl;
    dmog.bark();
    return 0; 
}