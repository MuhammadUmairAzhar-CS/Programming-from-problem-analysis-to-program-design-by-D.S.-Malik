#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t_Units, x, bestRented = 0, rented;
    double baseRent, rentIncrease, maintenance, maxProfit = -1, currentRent, revenue, t_Maintenance, profit;
    cout <<"Enter the total number of units= ";
    cin >> t_Units;
    cout <<"Enter the rent to occupy all units= $";
    cin >> baseRent;
    cout << "Enter the increase in rent that results in one vacant unit= $";
    cin >> rentIncrease;
    cout <<"Enter the amount to maintain a rented unit= $";
    cin >> maintenance;    
    for (x = 0; x<=t_Units; ++x)
    {
        rented = t_Units-x;
        currentRent = baseRent + (x * rentIncrease);        
        revenue = rented*currentRent;
        t_Maintenance = rented*maintenance;
        profit = revenue-t_Maintenance;
        if (profit > maxProfit)
        {
            maxProfit = profit;
            bestRented = rented;
        }
    }
    cout << fixed << setprecision(2);
    cout <<"Units to rent to maximize profit: "<<bestRented<< endl;
    cout <<"Maximum profit: $"<<maxProfit;

    return 0;
}