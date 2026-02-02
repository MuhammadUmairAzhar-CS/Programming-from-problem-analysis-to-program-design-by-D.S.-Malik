// 1. Incomplete C11 Program
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("inData.txt");
    outFile.open("outData.txt");
    
    string firstName, lastName, department;
    double grossSalary, bonusPercent, taxesPercent;
    double distance, travelTime;
    int coffeeCups;
    double coffeeCost;
    double paycheck, avgSpeed, salesAmount;
    
    inFile >> firstName >> lastName >> department;
    inFile >> grossSalary >> bonusPercent >> taxesPercent;
    inFile >> distance >> travelTime;
    inFile >> coffeeCups >> coffeeCost;
    
    paycheck = grossSalary * (1 + bonusPercent/100.0) * (1 - taxesPercent/100.0);
    avgSpeed = distance / travelTime;
    salesAmount = coffeeCups * coffeeCost;
    
    outFile << "Name: " << firstName << " " << lastName 
            << ", Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << fixed << setprecision(2) 
            << grossSalary << ", Monthly Bonus: " 
            << bonusPercent << "%, Taxes: " << taxesPercent << "%" << endl;
    outFile << "Paycheck: $" << paycheck << endl;
    outFile << "Distance Traveled: " << distance << " miles, "
            << "Traveling Time: " << travelTime << " hours" << endl;
    outFile << "Average Speed: " << avgSpeed << " miles per hour" << endl;
    outFile << "Number of Coffee Cups Sold: " << coffeeCups 
            << ", Cost: $" << coffeeCost << " per cup" << endl;
    outFile << "Sales Amount = $" << salesAmount << endl;
    
    inFile.close();
    outFile.close();
    
    return 0;
}
