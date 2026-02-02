#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double baseSalary, bonus, totalSales, additionalBonus, payCheck;
    int noOfServiceYears;
    
    cout << "Enter base salary: $";
    cin >> baseSalary;
    cout << "Enter number of service years: ";
    cin >> noOfServiceYears;
    cout << "Enter total sales for the month: $";
    cin >> totalSales;
    
    // Calculate bonus
    bonus = (noOfServiceYears <= 5) ? 10 * noOfServiceYears : 20 * noOfServiceYears;
    
    // Calculate commission
    if (totalSales < 5000)
        additionalBonus = 0;
    else if (totalSales < 10000)
        additionalBonus = totalSales * 0.03;
    else
        additionalBonus = totalSales * 0.06;
    
    payCheck = baseSalary + bonus + additionalBonus;
    
    cout << fixed << setprecision(2);
    cout << "Bonus for service: $" << bonus << endl;
    cout << "Additional bonus (commission): $" << additionalBonus << endl;
    cout << "Total paycheck: $" << payCheck << endl;
    
    return 0;
}
