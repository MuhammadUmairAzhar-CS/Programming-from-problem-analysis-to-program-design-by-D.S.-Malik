#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels;
    
    // Get user input
    cout << "Enter the number of quarters: ";
    cin >> quarters;
    
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    
    // Calculate total value in pennies
    int totalPennies = (quarters * 25) + (dimes * 10) + (nickels * 5);
    
    // Display results
    cout << "\nTotal value in pennies: " << totalPennies << endl;
    
    return 0;
}