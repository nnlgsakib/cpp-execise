#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    multimap<string, char> studentsinfo;
    studentsinfo.insert({"Alice", 'A'});
    studentsinfo.insert({"Bob", 'B'});
    studentsinfo.insert({"Charlie", 'C'});
    studentsinfo.insert({"Dave", 'D'});
    studentsinfo.insert({"Alice", 'E'}); // Duplicate key


    cout << "All students and their grades:" << endl;
    for (auto &pair : studentsinfo) {
        cout << pair.first << ": " << pair.second << endl;
        
    }
}