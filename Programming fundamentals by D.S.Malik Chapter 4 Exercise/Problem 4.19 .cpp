// 19. Vegetable Farm Profit
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double totalArea;
    int numVeggies;
    double area1, area2;
    double seed1, plant1, fert1, labor1, price1;
    double seed2, plant2, fert2, labor2, price2;
    
    cout << "Enter total farm area (acres): ";
    cin >> totalArea;
    cout << "Enter number of vegetables (1 or 2): ";
    cin >> numVeggies;
    
    cout << fixed << setprecision(2);
    
    if (numVeggies == 1)
    {
        area1 = totalArea;
        cout << "Enter seed cost per acre: $";
        cin >> seed1;
        cout << "Enter plantation cost per acre: $";
        cin >> plant1;
        cout << "Enter fertilizing cost per acre: $";
        cin >> fert1;
        cout << "Enter labor cost per acre: $";
        cin >> labor1;
        cout << "Enter selling price per acre: $";
        cin >> price1;
        
        double revenue = area1 * price1;
        double costs = area1 * (seed1 + plant1 + fert1 + labor1);
        double profit = revenue - costs;
        
        cout << "Total revenue: $" << revenue << endl;
        cout << "Profit/Loss: $" << profit << endl;
    }
    else
    {
        cout << "Enter percentage for first vegetable: ";
        cin >> area1;
        area1 = totalArea * area1 / 100.0;
        area2 = totalArea - area1;
        
        cout << "Vegetable 1 costs:" << endl;
        cout << "Enter seed cost per acre: $";
        cin >> seed1;
        cout << "Enter plantation cost per acre: $";
        cin >> plant1;
        cout << "Enter fertilizing cost per acre: $";
        cin >> fert1;
        cout << "Enter labor cost per acre: $";
        cin >> labor1;
        cout << "Enter selling price per acre: $";
        cin >> price1;
        
        cout << "Vegetable 2 costs:" << endl;
        cout << "Enter seed cost per acre: $";
        cin >> seed2;
        cout << "Enter plantation cost per acre: $";
        cin >> plant2;
        cout << "Enter fertilizing cost per acre: $";
        cin >> fert2;
        cout << "Enter labor cost per acre: $";
        cin >> labor2;
        cout << "Enter selling price per acre: $";
        cin >> price2;
        
        double revenue = area1 * price1 + area2 * price2;
        double costs = area1 * (seed1 + plant1 + fert1 + labor1) +
                      area2 * (seed2 + plant2 + fert2 + labor2);
        double profit = revenue - costs;
        
        cout << "Total revenue: $" << revenue << endl;
        cout << "Profit/Loss: $" << profit << endl;
    }
    
    return 0;
}
