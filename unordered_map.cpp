#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

int main() {
    unordered_map<string,char> students;
    students["Alice"] = 'A';
    students["Bob"] = 'B';
    students["Charlie"] = 'C';
    students["David"] = 'D';
    students["Eve"] = 'E';
 // print all values of students
 for (auto &entry : students) {
        cout << entry.first << " - " << entry.second << endl;
    }
    // add a new student to the map
    students["Frank"] = 'F';
    // print all values of students
    for (auto &entry : students) {
        cout << entry.first << " - " << entry.second << endl;
    }

    return 0;
    
}