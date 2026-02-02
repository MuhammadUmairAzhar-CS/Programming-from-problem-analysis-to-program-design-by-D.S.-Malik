// 20. Hotel Room Discount
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double ROOM_COST = 100.00;
    const double SALES_TAX_RATE = 8.25;
    
    double roomCost, rooms, days, salesTaxRate;
    double discountRate = 0.0;
    
    cout << "Enter room cost per night: $";
    cin >> roomCost;
    cout << "Enter number of rooms: ";
    cin >> rooms;
    cout << "Enter number of days: ";
    cin >> days;
    cout << "Enter sales tax rate (%): ";
    cin >> salesTaxRate;
    
    if (rooms >= 30)
        discountRate = 0.30;
    else if (rooms >= 20)
        discountRate = 0.20;
    else if (rooms >= 10)
        discountRate = 0.10;
    
    if (days >= 3)
        discountRate += 0.05;
    
    double totalCost = rooms * days * roomCost * (1 - discountRate);
    double salesTax = totalCost * salesTaxRate / 100.0;
    double totalBilling = totalCost + salesTax;
    
    cout << fixed << setprecision(2);
    cout << "Room cost: $" << roomCost << endl;
    cout << "Discount: " << discountRate * 100 << "%" << endl;
    cout << "Rooms: " << rooms << endl;
    cout << "Days: " << days << endl;
    cout << "Total room cost: $" << totalCost << endl;
    cout << "Sales tax: $" << salesTax << endl;
    cout << "Total billing: $" << totalBilling << endl;
    
    return 0;
}
