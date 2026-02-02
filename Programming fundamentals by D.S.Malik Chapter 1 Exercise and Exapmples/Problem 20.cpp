#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double accountBalance, withdrawalAmount, serviceCharge = 0, newBalance;
    char withdrawAnyway;
    
    cout << "Enter current account balance: $";
    cin >> accountBalance;
    cout << "Enter withdrawal amount: $";
    cin >> withdrawalAmount;
    
    if (withdrawalAmount > 500) {
        cout << "Maximum withdrawal is $500 per day." << endl;
        return 0;
    }
    
    if (accountBalance <= 0) {
        cout << "Insufficient funds. Cannot withdraw." << endl;
        return 0;
    }
    
    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds. Withdraw with $25 service charge? (y/n): ";
        cin >> withdrawAnyway;
        if (withdrawAnyway == 'y' || withdrawAnyway == 'Y') {
            serviceCharge = 25.0;
            if (accountBalance + serviceCharge >= withdrawalAmount) {
                newBalance = accountBalance - withdrawalAmount;
            } else {
                cout << "Still insufficient even with service charge." << endl;
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        if (withdrawalAmount > 300)
            serviceCharge = (withdrawalAmount - 300) * 0.04;
        newBalance = accountBalance - withdrawalAmount - serviceCharge;
    }
    
    cout << fixed << setprecision(2);
    cout << "Amount dispensed: $" << withdrawalAmount << endl;
    cout << "Service charge: $" << serviceCharge << endl;
    cout << "New balance: $" << newBalance << endl;
    
    return 0;
}
