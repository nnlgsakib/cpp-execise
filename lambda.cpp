#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 3, 1, 4, 5};
    
    // print all using labda function
    for_each(nums.begin(), nums.end(), [](int num) {
        cout << num << " ";
    });
    cout << endl;
    //exer 2 
    //.@lambda with capture

    vector<int> nums2 = {2, 3, 1, 4, 5};
    int x = 10;
    // find each sum of int using lambda function with capture
    for_each(nums2.begin(), nums2.end(), [x](int num) {
        cout << num + x << " ";
    });
    cout << endl;
    
    
    return 0;
}

