#include <iostream>
using namespace std;

int main() {
    double loanAmount;
    double yearlyInterestRate;
    double monthlyPayment;
    double monthlyInterestRate;
    double interest;
    double principal;
    double totalInterest = 0.0;
    int months = 0;

    cout << "Enter the loan amount: ";
    cin >> loanAmount;

    cout << "Enter the annual interest rate (in %): ";
    cin >> yearlyInterestRate;

    monthlyInterestRate = yearlyInterestRate / 12 / 100;

    double minPayment = loanAmount * monthlyInterestRate;
    cout << "Minimum monthly payment to avoid growing debt: $" << minPayment << endl;

    cout << "Enter your monthly payment: ";
    cin >> monthlyPayment;

    if (monthlyPayment <= minPayment) {
        cout << "Monthly payment is too low. The loan cannot be repaid." << endl;
        return 0;
    }

    while (loanAmount > 0) {
        interest = loanAmount * monthlyInterestRate;
        principal = monthlyPayment - interest;
        totalInterest = totalInterest + interest;

        if (loanAmount <= monthlyPayment) {
            cout << "\nBefore the last payment, remaining loan amount: $" << loanAmount << endl;
            double lastPayment = loanAmount + interest;
            totalInterest = totalInterest + interest;
            cout << "The actual amount of the last payment: $" << lastPayment << endl;
            months++;
            break;
        }

        loanAmount = loanAmount - principal;
        months++;
    }

    cout << "\nLoan paid off in " << months << " months." << endl;
    cout << "Total interest paid: $" << totalInterest << endl;

    return 0;
}
