#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() {
    // trying weak pointer
    shared_ptr<string> weakString = make_shared<string>("Hello, World!");
    cout << "Shared string content: " << *weakString << endl; // prints "Hello, World!"
    weak_ptr<string> weakCopy = weakString;
    if (weakCopy.expired()) {
        cout << "Weak pointer is expired" << endl;
        weakString.reset(); // allows weak pointer to become expired

    }
    

    return 0;
}
