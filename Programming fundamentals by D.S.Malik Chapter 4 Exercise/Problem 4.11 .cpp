// 11. Salesperson Wages
#include <iostream>
using namespace std;

int main()
{
    double numItemsSold, itemPrice;
    double commissionRate;
    
    cout << "Enter number of items sold: ";
    cin >> numItemsSold;
    cout << "Enter price per item: ";
    cin >> itemPrice;
    cout << "Enter commission rate (percent): ";
    cin >> commissionRate;
    
    double totalSales = numItemsSold * itemPrice;
    double commission = totalSales * commissionRate / 100.0;
    double baseSalary = 200.0;
    double wages = baseSalary + commission;
    
    cout << "Total sales: $" << totalSales << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Monthly wages: $" << wages << endl;
    
    return 0;
}
