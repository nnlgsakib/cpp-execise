#include <iostream>
#include <string>

using namespace std;

int main() {
    int var = 100;
    int* ptr;
    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;


    // lets modify the value pointed by ptr
    *ptr = 200;

    cout << "Modified value of var: " << var << endl;
    cout << "Modified value pointed by ptr: " << *ptr << endl;

    return 0;
}