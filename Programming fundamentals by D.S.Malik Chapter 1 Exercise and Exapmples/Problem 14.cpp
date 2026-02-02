#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, pennies, totalPennies;
    
    cout << "Enter number of quarters: ";
    cin >> quarters;
    cout << "Enter number of dimes: ";
    cin >> dimes;
    cout << "Enter number of nickels: ";
    cin >> nickels;
    cout << "Enter number of pennies: ";
    cin >> pennies;
    
    totalPennies = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    
    cout << "Total in pennies: " << totalPennies << endl;
    
    return 0;
}
