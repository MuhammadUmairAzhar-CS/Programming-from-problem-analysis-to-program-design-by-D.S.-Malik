// 7. Credit Card Interest
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double netBalance, payment, d1, d2, interestRate;
    double averageDailyBalance, interest;
    
    cout << "Enter net balance: ";
    cin >> netBalance;
    cout << "Enter payment: ";
    cin >> payment;
    cout << "Enter days in billing cycle: ";
    cin >> d1;
    cout << "Enter days payment made before cycle: ";
    cin >> d2;
    cout << "Enter monthly interest rate: ";
    cin >> interestRate;
    
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    interest = averageDailyBalance * interestRate;
    
    cout << fixed << setprecision(2);
    cout << "Interest = $" << interest << endl;
    
    return 0;
}
