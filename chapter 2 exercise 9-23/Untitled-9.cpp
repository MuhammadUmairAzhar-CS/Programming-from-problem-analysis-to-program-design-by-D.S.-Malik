#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Get user input
    double payRate, hoursPerWeek;
    
    cout << "Enter your hourly pay rate: $";
    cin >> payRate;
    
    cout << "Enter the number of hours you worked each week: ";
    cin >> hoursPerWeek;
    
    // Constants
    const int WEEKS_WORKED = 5;
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENTAGE = 0.10;
    const double SUPPLIES_PERCENTAGE = 0.01;
    const double SAVINGS_BONDS_PERCENTAGE = 0.25;
    const double PARENTS_MATCH_RATE = 0.50;
    
    // Calculations
    // a. Income before and after taxes
    double incomeBeforeTax = payRate * hoursPerWeek * WEEKS_WORKED;
    double taxAmount = incomeBeforeTax * TAX_RATE;
    double incomeAfterTax = incomeBeforeTax - taxAmount;
    
    // b. Money spent on clothes and accessories
    double clothesMoney = incomeAfterTax * CLOTHES_PERCENTAGE;
    
    // c. Money spent on school supplies
    double suppliesMoney = incomeAfterTax * SUPPLIES_PERCENTAGE;
    
    // Remaining money after clothes and supplies
    double remainingAfterShopping = incomeAfterTax - clothesMoney - suppliesMoney;
    
    // d. Money spent on savings bonds
    double savingsBondsMoney = remainingAfterShopping * SAVINGS_BONDS_PERCENTAGE;
    
    // e. Money parents spend on additional savings bonds
    double parentsBondsMoney = savingsBondsMoney * PARENTS_MATCH_RATE;
    
    // Display results
    cout << fixed << setprecision(2);
    cout << "\n" << string(50, '=') << endl;
    cout << "SUMMER JOB FINANCIAL SUMMARY" << endl;
    cout << string(50, '=') << endl;
    
    cout << "\na. INCOME:" << endl;
    cout << "   Income before taxes: $" << incomeBeforeTax << endl;
    cout << "   Income after taxes:  $" << incomeAfterTax << endl;
    
    cout << "\nb. CLOTHES AND ACCESSORIES:" << endl;
    cout << "   Amount spent: $" << clothesMoney << endl;
    
    cout << "\nc. SCHOOL SUPPLIES:" << endl;
    cout << "   Amount spent: $" << suppliesMoney << endl;
    
    cout << "\nd. SAVINGS BONDS:" << endl;
    cout << "   Your contribution: $" << savingsBondsMoney << endl;
    
    cout << "\ne. PARENTS' CONTRIBUTION:" << endl;
    cout << "   Additional savings bonds: $" << parentsBondsMoney << endl;
    
    cout << "\n" << string(50, '=') << endl;
    cout << "TOTAL SAVINGS BONDS: $" << (savingsBondsMoney + parentsBondsMoney) << endl;
    cout << "REMAINING MONEY: $" << (remainingAfterShopping - savingsBondsMoney) << endl;
    cout << string(50, '=') << endl;
    
    return 0;
}