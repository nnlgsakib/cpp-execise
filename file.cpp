#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string filename = "userdata.txt";
    string name, age, email;
    
    // Taking input from the user
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    getline(cin, age);
    cout << "Enter your email: ";
    getline(cin, email);
    
    // Writing the data to the file
    ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "Name: " << name << endl;
        outFile << "Age: " << age << endl;
        outFile << "Email: " << email << endl;
        outFile.close();
        cout << "Data saved successfully!" << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    
    // Reading from the file
    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
