#include <iostream>
#include <string>

using namespace std;


int main(){
    const string name ="Sakib"; // name is contant 
    int age;
    int height;

    // taking input from user using std cin 

    cout << "Enter your HEIGHT: ";
    cin >> height;
    cout << "Enter your age: ";
    cin >> age;

    // pringing all values 

    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your height is " << height << endl;

    return 0;


}
