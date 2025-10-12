#include <iostream>
using namespace std;

int main() {
    int cents;
    int halfDollars, quarters, dimes, nickels, pennies;
    cout << "Enter amount in cents: ";
    cin >> cents;
    halfDollars = cents / 50;
    cents %= 50;
    quarters = cents / 25;
    cents %= 25;
    dimes = cents / 10;
    cents %= 10;
    nickels = cents / 5;
    cents %= 5;
    pennies = cents; 
    cout << "Change can be given as:" << endl;
    cout << "Half-dollars: " << halfDollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
