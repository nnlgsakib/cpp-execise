#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
    map<string , int> info ;
    info["jhon doe "] = 20;
    info["maria doe "] = 22;
    info["jose doe "] = 21;
    info["ana doe "] = 23;
    info["pedro doe "] = 25;

    // printing all elements
    cout << "All elements in the map: " << endl;
    for (auto& element : info) {
        cout << element.first << " : " << element.second << endl;
    }
    // update the value of "ana doe"
    info["ana doe "] = 30;
    cout <<"updated 'ana doe' element: " << endl;
    

    // map after all elemnt updating
    for (auto& element : info) {
        cout << element.first << " : " << element.second << endl;
    }

    return 0;

}