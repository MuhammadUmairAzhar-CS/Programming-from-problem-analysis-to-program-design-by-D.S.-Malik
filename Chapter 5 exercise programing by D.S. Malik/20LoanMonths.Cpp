#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double loanAmount, annualRate, monthlyPayment;

    cout << "Enter loan amount: $";
    cin >> loanAmount;
    cout << "Enter interest rate per year (%): ";
    cin >> annualRate;
    cout << "Enter monthly payment: $";
    cin >> monthlyPayment;

    double monthlyRate = (annualRate / 100.0) / 12.0;
    double firstInterest = loanAmount * monthlyRate;

    if (monthlyPayment <= firstInterest) {
        cout << "Monthly payment is too low. The loan will never be repaid." << endl;
        return 1;
    }

    int months = 0;
    while (loanAmount > 0) {
        double interest = loanAmount * monthlyRate;
        double principalPaid = monthlyPayment - interest;
        loanAmount -= principalPaid;
        months++;
    }

    cout << "It will take " << months << " months to repay the loan." << endl;

    return 0;
}