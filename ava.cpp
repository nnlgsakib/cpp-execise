#include <iostream>
using namespace std;

// Function to calculate the average of three integers
double average_calculator(int num1, int num2, int num3) {
    int total_nums = 3;              // Total number of integers
    int sum = num1 + num2 + num3;    // Sum of the three numbers
    double average = static_cast<double>(sum) / total_nums;  // Calculating average
    return average;                  // Return the calculated average
}

int main() {
    int num1, num2, num3;
    
    // Input three numbers
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    
    // Calculate the average using the function
    double average = average_calculator(num1, num2, num3);
    
    // Output the average
    cout << "Average of 3 numbers is: " << average << endl;
    
    return 0;
}
