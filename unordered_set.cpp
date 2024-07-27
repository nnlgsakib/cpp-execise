#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
unordered_set<int> numbers= {1, 2, 3, 4, 5, 5, 6, 7,3,3,4,3,1,1}; // Input array
    //print all intterger 
    for (int num : numbers) {
        cout << num << " ";

    }
    cout << endl;

    //remove number 3 
    numbers.erase(3);

    //print numbers after removing 3
    cout << "Numbers after removing 3: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    //count the number of unique elements
    int count = numbers.size();
    cout << "Number of unique elements: " << count << endl;



        return 0;
}