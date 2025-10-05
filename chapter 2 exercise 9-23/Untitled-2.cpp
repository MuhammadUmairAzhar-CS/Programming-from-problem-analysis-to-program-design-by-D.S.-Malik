#include <iostream>
#include <cmath>    // For round() function

using namespace std;

int main() {
    double num1, num2, num3, num4, num5;
    double sum;
    int roundedSum;
    
    // Prompt user for five decimal numbers
    cout << "Enter five decimal numbers:" << endl;
    cout << "Number 1: ";
    cin >> num1;
    
    cout << "Number 2: ";
    cin >> num2;
    
    cout << "Number 3: ";
    cin >> num3;
    
    cout << "Number 4: ";
    cin >> num4;
    
    cout << "Number 5: ";
    cin >> num5;
    
    // Calculate the sum
    sum = num1 + num2 + num3 + num4 + num5;
    
    // Convert to nearest integer
    roundedSum = round(sum);
    
    // Display the results
    cout << fixed;
    cout.precision(2);
    cout << "\nSum of the numbers: " << sum << endl;
    cout << "Rounded to nearest integer: " << roundedSum << endl;
    
    return 0;
}