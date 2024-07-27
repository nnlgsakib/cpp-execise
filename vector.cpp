#include <iostream>
#include <vector>
#include <algorithm>  // Include the algorithm library for max_element and min_element
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    nums.push_back(6);  // Add 6 to the end of the vector
    nums.push_back(7);  // Add 7 to the end of the vector
    nums.push_back(8);  // Add 8 to the end of the vector

    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Finding the maximum element
    int maxElem = *max_element(nums.begin(), nums.end());
    cout << "Maximum element: " << maxElem << endl;

    // Finding the minimum element
    int minElem = *min_element(nums.begin(), nums.end());
    cout << "Minimum element: " << minElem << endl;

    // Finding the sum of all elements
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    cout << "Sum of all elements: " << sum << endl;

    // Finding the average of all elements
    double average = static_cast<double>(sum) / nums.size();
    cout << "Average of all elements: " << average << endl;

    // Finding the median of all elements
    sort(nums.begin(), nums.end());  // Sorting the vector to find the median
    double median;
    size_t size = nums.size();
    if (size % 2 == 0) {
        median = (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
    } else {
        median = nums[size / 2];
    }
    cout << "Median of all elements: " << median << endl;

    return 0;
}
