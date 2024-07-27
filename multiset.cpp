#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    set<int> numbers = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10};

    //printg all elements in the set
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    int rmnum = 3;
    numbers.erase(rmnum);  // remove the number 3 from the set
    cout << "After removing " << rmnum << ":" << endl;

    // printg all elements in the set after removing 3
    for (int num : numbers) {
        cout << num << " ";
        
    }

    return 0;
}