#include <iostream>
using namespace std;



int divnum(int a, int b) {
    if (b == 0) {
        throw "Error: Division by zero";
    }
    return a / b;
}

int main() {
    try{
        int num1 ,num2;
        cout<< "enter num1 : ";
        cin>>num1;
        cout<< "enter num2 : ";
        cin>>num2;
        int result = divnum(num1, num2);
        cout<< "Result : "<<result<<endl;

    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
        return 0;
    }
}