// 10. Savings Bonds (Chapter 2 Ex18 Redo)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double payRate, federalTax, stateTax, clothes, accessories, schoolSupplies;
    double netIncome, savingsBonds, parentContribution;
    
    cout << "Enter hourly pay rate: ";
    cin >> payRate;
    cout << "Enter federal tax rate (percent): ";
    cin >> federalTax;
    cout << "Enter state tax rate (percent): ";
    cin >> stateTax;
    cout << "Enter cost of clothes: ";
    cin >> clothes;
    cout << "Enter cost of accessories: ";
    cin >> accessories;
    cout << "Enter cost of school supplies: ";
    cin >> schoolSupplies;
    
    double grossPay = 40 * 35 * payRate;
    double taxes = grossPay * (federalTax + stateTax) / 100.0;
    netIncome = grossPay - taxes;
    double totalExpenses = clothes + accessories + schoolSupplies;
    double savings = netIncome - totalExpenses;
    
    cout << fixed << setprecision(2);
    cout << "Gross pay: $" << grossPay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net income: $" << netIncome << endl;
    cout << "Savings: $" << savings << endl;
    
    double bondsPercent = savings / netIncome * 100.0;
    if (bondsPercent == 0)
    {
        savingsBonds = 0;
        parentContribution = savings * 0.01;
    }
    else if (bondsPercent <= 25)
    {
        savingsBonds = savings * bondsPercent / 100.0;
        parentContribution = savingsBonds * 0.25 + savings * 0.01;
    }
    else
    {
        savingsBonds = savings * bondsPercent / 100.0;
        parentContribution = savingsBonds * 0.40 + savings * 0.02;
    }
    
    cout << "Savings bonds: $" << savingsBonds << endl;
    cout << "Parent contribution: $" << parentContribution << endl;
    
    return 0;
}
