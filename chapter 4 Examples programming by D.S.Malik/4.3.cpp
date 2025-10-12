#include <iostream>
#include <iomanip>
using namespace std;

const double INTEREST_RATE = 0.015;

int main() {
    double creditCardBalance;
    double payment;
    double balance;
    double penalty = 0.0;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter credit card balance: ";
    cin >> creditCardBalance;

    cout << "Enter the payment: ";
    cin >> payment;

    balance = creditCardBalance - payment;

    if (balance > 0)
        penalty = balance * INTEREST_RATE;

    cout << "Remaining balance: $" << balance << endl;
    cout << "Penalty for next month: $" << penalty << endl;

    return 0;
}
