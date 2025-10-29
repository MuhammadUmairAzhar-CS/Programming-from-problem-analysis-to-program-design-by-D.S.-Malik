#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double loanAmount, annualRate, monthlyPayment, monthlyRate,
    minPayment, totalInterest, balanceBeforeLast, interest;
    int months;
    cout << "Enter loan amount: $";
    cin >> loanAmount;
    cout << "Enter interest rate per year (%): ";
    cin >> annualRate;
    monthlyRate = (annualRate / 100.0) / 12.0;
    minPayment = loanAmount * monthlyRate;
    cout << fixed << setprecision(2);
    cout << "Minimum payment to cover interest: $" << minPayment + 0.01 << endl;
    do {
        cout << "Enter monthly payment: $";
        cin >> monthlyPayment;
        if (monthlyPayment <= minPayment) {
            cout << "Payment must be greater than $" << minPayment << endl;
        }
    } while (monthlyPayment <= minPayment);

    months = 0;
    totalInterest = 0;
    balanceBeforeLast = loanAmount;
    while (loanAmount > 0) {
        months++;
        interest = loanAmount * monthlyRate;
        totalInterest += interest;
        if ((loanAmount + interest) <= monthlyPayment)
        {
            double lastPayment = loanAmount + interest;
            cout << "Loan amount before last payment: $" << loanAmount << endl;
            cout << "Your last payment will be: $" << lastPayment << endl;
            loanAmount = 0;
        }
        else
        {
            loanAmount -= (monthlyPayment - interest);
            balanceBeforeLast = loanAmount;
        }
    }
    cout << "It will take " << months << " months to repay the loan." << endl;
    cout << "Total interest paid: $" << totalInterest << endl;
    return 0;
}