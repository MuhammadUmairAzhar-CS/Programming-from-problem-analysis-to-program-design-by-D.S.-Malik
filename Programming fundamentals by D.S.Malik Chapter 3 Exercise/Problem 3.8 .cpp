// 8. Linda's Markup
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double merchandiseCost, salary, rent, electricity;
    double totalExpenses, totalCost, salePrice, markupPrice;
    const double DESIRED_PROFIT = 0.10;
    const double SALE_DISCOUNT = 0.15;
    
    cout << "Enter total merchandise cost: $";
    cin >> merchandiseCost;
    cout << "Enter total employee salary: $";
    cin >> salary;
    cout << "Enter yearly rent: $";
    cin >> rent;
    cout << "Enter electricity cost: $";
    cin >> electricity;
    
    totalExpenses = salary + rent + electricity;
    totalCost = merchandiseCost + totalExpenses;
    
    salePrice = merchandiseCost * (1 + DESIRED_PROFIT);
    markupPrice = salePrice / (1 - SALE_DISCOUNT);
    
    cout << fixed << setprecision(2);
    cout << "Merchandise should be marked up to: $" 
         << markupPrice << endl;
    
    return 0;
}
