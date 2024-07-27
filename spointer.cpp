#include <iostream>
#include <memory>
using namespace std;
int main() {
    shared_ptr<int>pter1  = make_shared<int>(100);
    shared_ptr<int>pter2  = pter1; 
    cout<<"The initial value pointed by pter1 is: " << *pter1 << endl;
    // print with ptr2 
    cout<<"The value pointed by pter2 is: " << *pter2 << endl;
    // increment pter1 and print with both ptr1 and ptr2
    *pter1 += 10;
    cout<<"After increment, the value pointed by pter1 is: " << *pter1 << endl;
    cout<<"After increment, the value pointed by pter2 is: " << *pter2 << endl;
    return 0;
}