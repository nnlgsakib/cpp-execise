#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1(new int(5));
    cout << "Initial value: " << *ptr1 << endl;

    unique_ptr<int> ptr2 = move(ptr1);
    cout << "Value after moving ptr1 to ptr2: " << *ptr2 << endl;
    // print that ptr1 is null
    if (!ptr1) {
        cout << "ptr1 is null" << endl;
        

    }
}