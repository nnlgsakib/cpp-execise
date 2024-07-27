#include <iostream>
#include <set>
#include <string>

using namespace std;
int main() {
    set<int> nums;
    nums.insert(1);
    nums.insert(2);
    nums.insert(3);
    nums.insert(4);
    nums.insert(5);
    nums.insert(1);  // Duplicates are ignored

    // print entire set 
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // count duplicates
    int count = 0;
    for (int num : nums) {
        if (nums.count(num) > 1) {
            count++;
        }
    }
    cout << "Number of duplicates: " << count << endl;

    // remove 1st  element
    nums.erase(nums.begin());
    cout << "After removing 1st element: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // remove all elements greater than 3
    for (auto it = nums.begin(); it!= nums.end();) {
        if (*it > 3) {
            it = nums.erase(it);
        } else {
            ++it;
        }
    }
    cout << "After removing elements greater than 3: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
    

 
    return 0;
}