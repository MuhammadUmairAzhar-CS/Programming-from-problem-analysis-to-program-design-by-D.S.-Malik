#include <iostream>
using namespace std;

int main() {
    double loanAmount;
    double yearlyInterestRate;
    double monthlyPayment;
    double monthlyInterestRate;
    double interest;
    double principal;
    int months = 0;

    cout << "Enter the loan amount: ";
    cin >> loanAmount;

    cout << "Enter the annual interest rate (in %): ";
    cin >> yearlyInterestRate;

    cout << "Enter the monthly payment: ";
    cin >> monthlyPayment;

    monthlyInterestRate = yearlyInterestRate / 12 / 100;

    interest = loanAmount * monthlyInterestRate;

    if (monthlyPayment <= interest) {
        cout << "Monthly payment is too low. The loan cannot be repaid." << endl;
        return 0;
    }

    while (loanAmount > 0) {
        interest = loanAmount * monthlyInterestRate;
        principal = monthlyPayment - interest;
        loanAmount = loanAmount - principal;
        months = months + 1;
    }

    cout << "It will take " << months << " months to repay the loan." << endl;

    return 0;
}
